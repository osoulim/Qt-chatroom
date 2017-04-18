//
// Created by mamzi on 4/11/17.
//

#ifndef QTCHATROOM_CHWINDOW_H
#define QTCHATROOM_CHWINDOW_H


#include <QWidget>
#include <QPushButton>
#include <QTextEdit>
#include <QLineEdit>

class Chwindow: public QWidget
{
    Q_OBJECT
    public:
        explicit Chwindow(QWidget *parent=0);
    private:
        QPushButton *send;
        QTextEdit *panel;
        QLineEdit *message;
    public slots:
        void send_massage();
        void new_massage(QString);
    signals:
        void forward(QString);

};


#endif //QTCHATROOM_CHWINDOW_H
