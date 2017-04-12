//
// Created by mamzi on 4/11/17.
//

#ifndef QTCHATROOM_CHWINDOW_H
#define QTCHATROOM_CHWINDOW_H


#include <QWidget>

class QPushButton;
class QTextEdit;

class Chwindow: public QWidget
{
    Q_OBJECT
    public:
        explicit Chwindow(QWidget *parent=0);

    private:
        QPushButton *send;
        QTextEdit *message, *panel;

};


#endif //QTCHATROOM_CHWINDOW_H
