//
// Created by mamzi on 4/10/17.
//

#ifndef QTCHATROOM_LGWINDOW_H
#define QTCHATROOM_LGWINDOW_H

#include <QWidget>
#include <QHostAddress>
#include <QPushButton>
#include <QTextEdit>
#include <QLabel>


class Lgwindow: public QWidget
{
    Q_OBJECT
    public:
        explicit Lgwindow(QWidget *parent = 0);
    private:
        QPushButton *lgbut;
        QTextEdit *username, *ip, *port;
    public slots:
        void login();
    signals:
        void mk_connection(QHostAddress*, quint16, QString);
};


#endif //QTCHATROOM_LGWINDOW_H
