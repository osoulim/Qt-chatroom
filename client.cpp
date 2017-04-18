//
// Created by mamzi on 4/15/17.
//

#include "client.h"

client::client()
{
    lg_menu = new Lgwindow();
    connect(lg_menu, SIGNAL(mk_connection(QHostAddress*, quint16, QString)), this, SLOT(sign_in(QHostAddress*, quint16, QString)));
}

void client::sign_in(QHostAddress *add, quint16 port, QString username)
{
    this->username = username;
    this->connection = new Network_mg(add, port);
    this->lg_menu->hide();
    this->chat_window = new Chwindow();
    connect(this->chat_window, SIGNAL(forward(QString)), this, SLOT(send(QString)));
    connect(this->connection, SIGNAL(income(QString)), this, SLOT(recieve(QString)));
}

void client::send(QString m)
{
    this->connection->sendMessage(this->username + "::" + m);
    this->chat_window->new_massage("Me::" + m);
}

void client::recieve(QString m)
{
    this->chat_window->new_massage(m);
}