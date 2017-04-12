//
// Created by mamzi on 4/11/17.
//

#include "Chwindow.h"
#include <QPushButton>
#include <QTextEdit>

Chwindow::Chwindow(QWidget *parent):
QWidget(parent)
{
    setFixedSize(300, 500);
    int w = 70, h = 40;
    panel = new QTextEdit(this);
    panel->setGeometry(0, 0, this->width(), this->height()-h);

    message = new QTextEdit(this);
    message->setGeometry(0, this->height()-h, this->width()-w, h);

    send = new QPushButton(this);
    send->setGeometry(this->width() - w, this->height() - h, w, h);
    send->setText("Send");

    panel->show();
    message->show();
    send->show();

}