/********************************************************************************
** Form generated from reading UI file 'matriz.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATRIZ_H
#define UI_MATRIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Matriz
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *MatrizA;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtM1_11;
    QLineEdit *txtM1_12;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *txtM1_21;
    QLineEdit *txtM1_22;
    QComboBox *comboBox;
    QGroupBox *MatrizB;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *txtM2_11;
    QLineEdit *txtM2_12;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *txtM2_21;
    QLineEdit *txtM2_22;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOperar;
    QGroupBox *MatrizR;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *txtMR_11;
    QLineEdit *txtMR_12;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *txtMR_21;
    QLineEdit *txtMR_22;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Matriz)
    {
        if (Matriz->objectName().isEmpty())
            Matriz->setObjectName(QStringLiteral("Matriz"));
        Matriz->resize(582, 441);
        Matriz->setMinimumSize(QSize(582, 441));
        Matriz->setMaximumSize(QSize(582, 441));
        centralWidget = new QWidget(Matriz);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        MatrizA = new QGroupBox(centralWidget);
        MatrizA->setObjectName(QStringLiteral("MatrizA"));
        gridLayout = new QGridLayout(MatrizA);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        txtM1_11 = new QLineEdit(MatrizA);
        txtM1_11->setObjectName(QStringLiteral("txtM1_11"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txtM1_11->sizePolicy().hasHeightForWidth());
        txtM1_11->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        txtM1_11->setFont(font);
        txtM1_11->setInputMethodHints(Qt::ImhNone);
        txtM1_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(txtM1_11);

        txtM1_12 = new QLineEdit(MatrizA);
        txtM1_12->setObjectName(QStringLiteral("txtM1_12"));
        sizePolicy.setHeightForWidth(txtM1_12->sizePolicy().hasHeightForWidth());
        txtM1_12->setSizePolicy(sizePolicy);
        txtM1_12->setFont(font);
        txtM1_12->setInputMethodHints(Qt::ImhNone);
        txtM1_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(txtM1_12);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        txtM1_21 = new QLineEdit(MatrizA);
        txtM1_21->setObjectName(QStringLiteral("txtM1_21"));
        sizePolicy.setHeightForWidth(txtM1_21->sizePolicy().hasHeightForWidth());
        txtM1_21->setSizePolicy(sizePolicy);
        txtM1_21->setFont(font);
        txtM1_21->setInputMethodHints(Qt::ImhNone);
        txtM1_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(txtM1_21);

        txtM1_22 = new QLineEdit(MatrizA);
        txtM1_22->setObjectName(QStringLiteral("txtM1_22"));
        sizePolicy.setHeightForWidth(txtM1_22->sizePolicy().hasHeightForWidth());
        txtM1_22->setSizePolicy(sizePolicy);
        txtM1_22->setFont(font);
        txtM1_22->setInputMethodHints(Qt::ImhNone);
        txtM1_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(txtM1_22);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(MatrizA);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_7->addWidget(comboBox);

        MatrizB = new QGroupBox(centralWidget);
        MatrizB->setObjectName(QStringLiteral("MatrizB"));
        gridLayout_2 = new QGridLayout(MatrizB);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        txtM2_11 = new QLineEdit(MatrizB);
        txtM2_11->setObjectName(QStringLiteral("txtM2_11"));
        sizePolicy.setHeightForWidth(txtM2_11->sizePolicy().hasHeightForWidth());
        txtM2_11->setSizePolicy(sizePolicy);
        txtM2_11->setFont(font);
        txtM2_11->setInputMethodHints(Qt::ImhNone);
        txtM2_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(txtM2_11);

        txtM2_12 = new QLineEdit(MatrizB);
        txtM2_12->setObjectName(QStringLiteral("txtM2_12"));
        sizePolicy.setHeightForWidth(txtM2_12->sizePolicy().hasHeightForWidth());
        txtM2_12->setSizePolicy(sizePolicy);
        txtM2_12->setFont(font);
        txtM2_12->setInputMethodHints(Qt::ImhNone);
        txtM2_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(txtM2_12);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        txtM2_21 = new QLineEdit(MatrizB);
        txtM2_21->setObjectName(QStringLiteral("txtM2_21"));
        sizePolicy.setHeightForWidth(txtM2_21->sizePolicy().hasHeightForWidth());
        txtM2_21->setSizePolicy(sizePolicy);
        txtM2_21->setFont(font);
        txtM2_21->setInputMethodHints(Qt::ImhNone);
        txtM2_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(txtM2_21);

        txtM2_22 = new QLineEdit(MatrizB);
        txtM2_22->setObjectName(QStringLiteral("txtM2_22"));
        sizePolicy.setHeightForWidth(txtM2_22->sizePolicy().hasHeightForWidth());
        txtM2_22->setSizePolicy(sizePolicy);
        txtM2_22->setFont(font);
        txtM2_22->setInputMethodHints(Qt::ImhNone);
        txtM2_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(txtM2_22);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(MatrizB);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        btnOperar = new QPushButton(centralWidget);
        btnOperar->setObjectName(QStringLiteral("btnOperar"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnOperar->sizePolicy().hasHeightForWidth());
        btnOperar->setSizePolicy(sizePolicy1);
        btnOperar->setMaximumSize(QSize(16777215, 100));
        btnOperar->setCheckable(false);

        horizontalLayout_8->addWidget(btnOperar);

        MatrizR = new QGroupBox(centralWidget);
        MatrizR->setObjectName(QStringLiteral("MatrizR"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(MatrizR->sizePolicy().hasHeightForWidth());
        MatrizR->setSizePolicy(sizePolicy2);
        gridLayout_3 = new QGridLayout(MatrizR);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        txtMR_11 = new QLineEdit(MatrizR);
        txtMR_11->setObjectName(QStringLiteral("txtMR_11"));
        sizePolicy.setHeightForWidth(txtMR_11->sizePolicy().hasHeightForWidth());
        txtMR_11->setSizePolicy(sizePolicy);
        txtMR_11->setFont(font);
        txtMR_11->setInputMethodHints(Qt::ImhPreferNumbers);
        txtMR_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txtMR_11->setReadOnly(true);

        horizontalLayout_5->addWidget(txtMR_11);

        txtMR_12 = new QLineEdit(MatrizR);
        txtMR_12->setObjectName(QStringLiteral("txtMR_12"));
        sizePolicy.setHeightForWidth(txtMR_12->sizePolicy().hasHeightForWidth());
        txtMR_12->setSizePolicy(sizePolicy);
        txtMR_12->setFont(font);
        txtMR_12->setInputMethodHints(Qt::ImhPreferNumbers);
        txtMR_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txtMR_12->setReadOnly(true);

        horizontalLayout_5->addWidget(txtMR_12);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        txtMR_21 = new QLineEdit(MatrizR);
        txtMR_21->setObjectName(QStringLiteral("txtMR_21"));
        sizePolicy.setHeightForWidth(txtMR_21->sizePolicy().hasHeightForWidth());
        txtMR_21->setSizePolicy(sizePolicy);
        txtMR_21->setFont(font);
        txtMR_21->setInputMethodHints(Qt::ImhPreferNumbers);
        txtMR_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txtMR_21->setReadOnly(true);

        horizontalLayout_6->addWidget(txtMR_21);

        txtMR_22 = new QLineEdit(MatrizR);
        txtMR_22->setObjectName(QStringLiteral("txtMR_22"));
        sizePolicy.setHeightForWidth(txtMR_22->sizePolicy().hasHeightForWidth());
        txtMR_22->setSizePolicy(sizePolicy);
        txtMR_22->setFont(font);
        txtMR_22->setInputMethodHints(Qt::ImhPreferNumbers);
        txtMR_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txtMR_22->setReadOnly(true);

        horizontalLayout_6->addWidget(txtMR_22);


        verticalLayout_3->addLayout(horizontalLayout_6);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);


        horizontalLayout_8->addWidget(MatrizR);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        horizontalLayout_9->addLayout(horizontalLayout_8);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_9);


        gridLayout_4->addLayout(verticalLayout_4, 0, 0, 1, 1);

        Matriz->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Matriz);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 582, 22));
        Matriz->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Matriz);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Matriz->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Matriz);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Matriz->setStatusBar(statusBar);

        retranslateUi(Matriz);

        QMetaObject::connectSlotsByName(Matriz);
    } // setupUi

    void retranslateUi(QMainWindow *Matriz)
    {
        Matriz->setWindowTitle(QApplication::translate("Matriz", "Usando matrices con qt", Q_NULLPTR));
        MatrizA->setTitle(QApplication::translate("Matriz", "Matriz 1", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Matriz", "+", Q_NULLPTR)
         << QApplication::translate("Matriz", "-", Q_NULLPTR)
         << QApplication::translate("Matriz", "*", Q_NULLPTR)
         << QApplication::translate("Matriz", "/", Q_NULLPTR)
        );
        MatrizB->setTitle(QApplication::translate("Matriz", "Matriz 2", Q_NULLPTR));
        btnOperar->setText(QApplication::translate("Matriz", "Operar", Q_NULLPTR));
        MatrizR->setTitle(QApplication::translate("Matriz", "Matriz R", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Matriz: public Ui_Matriz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRIZ_H
