//
// Created by mamzi on 4/10/17.
//

#include "Lgwindow.h"
#include <QPushButton>
#include <QTextEdit>

Lgwindow::Lgwindow(QWidget *parent):
QWidget(parent)
{
    setFixedSize(300, 400);
    username = new QTextEdit(this);
    username->setGeometry(30, 100, 240, 30);
    ip = new QTextEdit(this);
    ip->setGeometry(30, 150, 150, 30);
    ip->setText("127.0.0.1");
    port = new QTextEdit(this);
    port->setGeometry(220, 150, 50, 30);
    port->setText("8080");

    lgbut = new QPushButton(this);
    lgbut->setGeometry(30, 200, 240, 30);
    lgbut->setText("login");

    //show the objects
    username->show();
    ip->show();
    port->show();
    lgbut->show();
}