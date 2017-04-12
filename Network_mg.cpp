//
// Created by mamzi on 4/12/17.
//

#include "Network_mg.h"
#include <QHostAddress>
#include <QTcpSocket>
#include <QString>

Network_mg::Network_mg(QHostAddress *add, int port)
{
    serverAddress = add;
    serverPort = port;
    socket = new QTcpSocket;
    socket->connectToHost(*serverAddress, serverPort);
}

void Network_mg::getMessage(QString message)
{

}

void Network_mg::sendMessage(QString message)
{

}