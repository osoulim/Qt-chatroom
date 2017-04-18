//
// Created by mamzi on 4/10/17.
//

#include "Lgwindow.h"

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
    port->setText("8000");

    lgbut = new QPushButton(this);
    lgbut->setGeometry(30, 200, 240, 30);
    lgbut->setText("login");

    QLabel *l1 = new QLabel(this);
    l1->setGeometry(30, 70, 100, 30);
    l1->setText("Enter Username");
    //show the objects
    username->show();
    ip->show();
    port->show();
    lgbut->show();

    show();
    connect(lgbut, SIGNAL(clicked()), this, SLOT(login()));
}

void Lgwindow::login()
{
    QHostAddress *addr = new QHostAddress(this->ip->toPlainText());
    quint16 *port = new quint16(this->port->toPlainText().toInt());
    emit mk_connection(addr, *port, this->username->toPlainText());
}