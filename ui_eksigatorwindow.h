/********************************************************************************
** Form generated from reading ui file 'eksigatorwindow.ui'
**
** Created: Sat Jan 23 22:20:37 2010
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_EKSIGATORWINDOW_H
#define UI_EKSIGATORWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EksigatorWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QLabel *label;
    QLineEdit *emailField;
    QPushButton *fetchButton;
    QLabel *label_2;
    QLineEdit *apiKeyField;
    QPushButton *aboutButton;
    QTreeWidget *treeWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *EksigatorWindow)
    {
        if (EksigatorWindow->objectName().isEmpty())
            EksigatorWindow->setObjectName(QString::fromUtf8("EksigatorWindow"));
        EksigatorWindow->resize(450, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EksigatorWindow->sizePolicy().hasHeightForWidth());
        EksigatorWindow->setSizePolicy(sizePolicy);
        EksigatorWindow->setMinimumSize(QSize(450, 300));
        EksigatorWindow->setMaximumSize(QSize(450, 300));
        EksigatorWindow->setBaseSize(QSize(450, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo/resources/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        EksigatorWindow->setWindowIcon(icon);
        EksigatorWindow->setTabShape(QTabWidget::Triangular);
        centralWidget = new QWidget(EksigatorWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 431, 261));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(layoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(64, 64));

        gridLayout->addWidget(widget, 0, 0, 2, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        emailField = new QLineEdit(layoutWidget);
        emailField->setObjectName(QString::fromUtf8("emailField"));

        gridLayout->addWidget(emailField, 0, 2, 1, 1);

        fetchButton = new QPushButton(layoutWidget);
        fetchButton->setObjectName(QString::fromUtf8("fetchButton"));
        fetchButton->setEnabled(true);

        gridLayout->addWidget(fetchButton, 0, 3, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        apiKeyField = new QLineEdit(layoutWidget);
        apiKeyField->setObjectName(QString::fromUtf8("apiKeyField"));

        gridLayout->addWidget(apiKeyField, 1, 2, 1, 1);

        aboutButton = new QPushButton(layoutWidget);
        aboutButton->setObjectName(QString::fromUtf8("aboutButton"));

        gridLayout->addWidget(aboutButton, 1, 3, 1, 1);

        treeWidget = new QTreeWidget(layoutWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        gridLayout->addWidget(treeWidget, 2, 0, 1, 4);

        EksigatorWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(EksigatorWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        EksigatorWindow->setStatusBar(statusBar);

        retranslateUi(EksigatorWindow);

        QMetaObject::connectSlotsByName(EksigatorWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EksigatorWindow)
    {
        EksigatorWindow->setWindowTitle(QApplication::translate("EksigatorWindow", "Ek$igator", 0, QApplication::UnicodeUTF8));
        widget->setStyleSheet(QApplication::translate("EksigatorWindow", "background:url(:/logo/resources/logo.png)", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("EksigatorWindow", "E-posta", 0, QApplication::UnicodeUTF8));
        fetchButton->setText(QApplication::translate("EksigatorWindow", "Kontrol et", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("EksigatorWindow", "API anahtar\304\261", 0, QApplication::UnicodeUTF8));
        aboutButton->setText(QApplication::translate("EksigatorWindow", "Hakk\304\261nda", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("EksigatorWindow", "Ba\305\237l\304\261klar", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("EksigatorWindow", "G\303\274ncellenen Ba\305\237l\304\261klar", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("EksigatorWindow", "Di\304\237er Ba\305\237l\304\261klar", 0, QApplication::UnicodeUTF8));
        treeWidget->setSortingEnabled(__sortingEnabled);

        Q_UNUSED(EksigatorWindow);
    } // retranslateUi

};

namespace Ui {
    class EksigatorWindow: public Ui_EksigatorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EKSIGATORWINDOW_H
