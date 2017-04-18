//
// Created by mamzi on 4/15/17.
//

#ifndef QTCHATROOM_CLIENT_H
#define QTCHATROOM_CLIENT_H

#include <QObject>
#include "Chwindow.h"
#include "Lgwindow.h"
#include "Network_mg.h"
#include <QString>

class client: public QObject
{
    Q_OBJECT
    public:
        client();
    private:
        QString username;
        Lgwindow *lg_menu;
        Chwindow *chat_window;
        Network_mg *connection;
    public slots:
        void sign_in(QHostAddress*, quint16, QString);
        void send(QString);
        void recieve(QString);
};


#endif //QTCHATROOM_CLIENT_H
