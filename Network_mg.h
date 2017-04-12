//
// Created by mamzi on 4/12/17.
//

#ifndef QTCHATROOM_NETWORK_MG_H
#define QTCHATROOM_NETWORK_MG_H

#include <QObject>
class QHostAddress;
class QTcpSocket;
class Network_mg : public QObject
{
    Q_OBJECT
    public:
        Network_mg(QHostAddress*, int);
    private:
        QTcpSocket *socket;
        QHostAddress *serverAddress;
        quint16 serverPort;
    public slots:
        void getMessage(QString);
        void sendMessage(QString);
    signals:
        void income(QString);

};


#endif //QTCHATROOM_NETWORK_MG_H
