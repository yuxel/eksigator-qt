#ifndef EKSIGATORWINDOW_H
#define EKSIGATORWINDOW_H

#include <QtGui/QMainWindow>
#include <QtNetwork>
#include <QScriptEngine>
#include <QScriptValueIterator>

namespace Ui
{
    class EksigatorWindow;
}

class EksigatorWindow : public QMainWindow
{
    Q_OBJECT

public:

    QString apiBaseUrl;

    EksigatorWindow(QWidget *parent = 0);
    ~EksigatorWindow();

private:

    QSettings settings;
    QString applicationDir;
    QStringList updatedTitles;
    QStringList notUpdatedTitles;
    QHttp http;
    int connectionId;

    Ui::EksigatorWindow *ui;

    QString getApiUrl();
    void fillUserDetailsFromSettings();
    void populateList();
    void parseJson(QByteArray data);
    bool isAuthenticated(QScriptValue sc);

private slots:
    void finished(int id, bool error);
    void on_fetchButton_clicked();
};

#endif // EKSIGATORWINDOW_H
