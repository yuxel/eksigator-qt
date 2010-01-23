#include "eksigatorwindow.h"
#include "ui_eksigatorwindow.h"
#include <QMessageBox>
#include <QToolTip>

/**
 * set up signals and slots and show gui
 */
EksigatorWindow::EksigatorWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::EksigatorWindow)
{

    applicationDir = QApplication::applicationDirPath ();

    apiBaseUrl="http://api.eksigator.com/";

    ui->setupUi(this);


    connect(&http, SIGNAL(requestFinished(int, bool)),
             this, SLOT(finished(int, bool)));


    fillUserDetailsFromSettings();
    this->ui->statusBar->setStyleSheet("color:red; font-weight:bold; text-align:center");

}

EksigatorWindow::~EksigatorWindow()
{
    delete ui;
}


void EksigatorWindow::fillUserDetailsFromSettings()
{
    ui->emailField->setText(  settings.value("email","demo").toString() );
    ui->apiKeyField->setText( settings.value("apiKey","demo").toString() );
}

/**
 * returns api fetch url for user
 */
QString EksigatorWindow::getApiUrl()
{
    QString email  = ui->emailField->text();
    QString apiKey = ui->apiKeyField->text();

    settings.setValue("email", email);
    settings.setValue("apikey", apiKey);

    QString apiUrl;
    apiUrl = apiBaseUrl + email + "/" + apiKey + "/getList";


    return apiUrl;
}

/**
 * generate api URL on fetch Button's click event
 * and request data
 */
void EksigatorWindow::on_fetchButton_clicked()
{

    ui->fetchButton->setEnabled(false);
    QString apiUrl = getApiUrl();

    QUrl url( getApiUrl() );

    http.setHost(url.host());
    connectionId = http.get(url.path());
}


/**
 * parse returned JSON data
 * check if user has authorized
 * then update list
 */
void EksigatorWindow::parseJson(QByteArray result)
{
    QScriptValue sc;
    QScriptEngine engine;
    sc = engine.evaluate(QString(result));

    //flush lists
    while (!updatedTitles.isEmpty()) {
        updatedTitles.removeFirst();
    }

    while (!notUpdatedTitles.isEmpty()) {
        notUpdatedTitles.removeFirst();
    }

    if(!isAuthenticated(sc)) {

        QString loginError = trUtf8("Giriş başarısız, e-postanızı ve API anahtarınızı kontrol edin");
        this->ui->statusBar->showMessage(loginError,5000);

    }
    else {
        this->ui->statusBar->clearMessage();
       //traverse in object
       if (sc.isArray())
        {
                 QScriptValueIterator it(sc);
                 while (it.hasNext()) {
                     it.next();

                      QString itemStatus = it.value().property("status").toString();
                      QString itemLastId = it.value().property("lastId").toString();
                      QString itemTitle  = it.value().property("title").toString();

                      if( itemStatus.toInt() == 1 ) {
                          updatedTitles << itemTitle;
                      }
                      else {
                          notUpdatedTitles << itemTitle;
                      }

                 }
        }
    }

}


/**
 * when http transmission finished
 * read all data, parse JSON and populate list
 */
void EksigatorWindow::finished(int id, bool error)
{
    ui->fetchButton->setEnabled(true);
    if (error) {
        QString loginError = trUtf8("Bağlantı sağlanamadı");
        this->ui->statusBar->showMessage(loginError,5000);
    }
    else if (id == connectionId) {
        QByteArray result = http.readAll();
        parseJson(result);
        populateList();
    }
}



/**
 * check if user authenticated
 */
bool EksigatorWindow::isAuthenticated(QScriptValue sc)
{
    if( sc.property("message").toString() == "AUTH_FAILED") {
      return false;
    }

    return true;
}


/**
 * populate title list of updated and
 * not updated fields
 */
void EksigatorWindow::populateList()
{

     //flush tree
     //@todo there's a bug here, flushing tree is not working well
     QTreeWidgetItem *treeUpdated = ui->treeWidget->topLevelItem(0);
     QTreeWidgetItemIterator it(treeUpdated);
     while (*it) {
         treeUpdated->removeChild(it.operator *());

         ++it;
     }

     QTreeWidgetItem *treeNotUpdated = ui->treeWidget->topLevelItem(1);
     QTreeWidgetItemIterator itNotUpdated(treeNotUpdated);
     while (*itNotUpdated) {
         treeNotUpdated->removeChild(itNotUpdated.operator *());
         ++itNotUpdated;
     }

     
     //qWarning() << updatedTitles.join(" | ");

    //@todo and there should be another way for adding a QStringList
    for (int i = 0; i < updatedTitles.size(); ++i) {
       QTreeWidgetItem *title = new QTreeWidgetItem();
       title->setText( 0, updatedTitles.at(i));
       treeUpdated->addChild(title);
    }

    for (int i = 0; i < notUpdatedTitles.size(); ++i) {
       QTreeWidgetItem *title = new QTreeWidgetItem();
       title->setText( 0, notUpdatedTitles.at(i));
       treeNotUpdated->addChild(title);
    }


}


