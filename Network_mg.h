//
// Created by mamzi on 4/12/17.
//

#ifndef QTCHATROOM_NETWORK_MG_H
#define QTCHATROOM_NETWORK_MG_H

#include <QObject>
#include <QHostAddress>
#include <QTcpSocket>
#include <QString>
class Network_mg : public QObject
{
    Q_OBJECT
    public:
        Network_mg(QHostAddress *add = new QHostAddress("127.0.0.1"), quint16 port = 8080);
    private:
        QTcpSocket *socket;
        QHostAddress *serverAddress;
        quint16 serverPort;
    public slots:
        void getMessage();
        void sendMessage(QString);
    signals:
        void income(QString);

};


#endif //QTCHATROOM_NETWORK_MG_H
