//
// Created by mamzi on 4/10/17.
//

#ifndef QTCHATROOM_LGWINDOW_H
#define QTCHATROOM_LGWINDOW_H

#include <QWidget>

class QPushButton;
class QTextEdit;

class Lgwindow: public QWidget
{
    Q_OBJECT
    public:
        explicit Lgwindow(QWidget *parent = 0);
    private:
    QPushButton *lgbut;
    QTextEdit *username, *ip, *port;
};


#endif //QTCHATROOM_LGWINDOW_H
