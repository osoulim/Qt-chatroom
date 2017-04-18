//
// Created by mamzi on 4/12/17.
//

#include "Network_mg.h"


Network_mg::Network_mg(QHostAddress *add, quint16 port)
{
    serverAddress = add;
    serverPort = port;
    socket = new QTcpSocket;
    socket->connectToHost(*serverAddress, serverPort);
    connect(socket, SIGNAL(readyRead()), this, SLOT(getMessage()));
}

void Network_mg::getMessage()
{
    QString m = socket->readAll();
    emit income(m);
}

void Network_mg::sendMessage(QString message)
{
    QByteArray data = &message.toStdString()[0];
    socket->write(data);
}