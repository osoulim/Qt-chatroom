//
// Created by mamzi on 4/11/17.
//

#include "Chwindow.h"


Chwindow::Chwindow(QWidget *parent):
QWidget(parent)
{
    setFixedSize(300, 500);
    int w = 70, h = 40;
    panel = new QTextEdit(this);
    panel->setGeometry(0, 0, this->width(), this->height()-h);
    panel->setReadOnly(1);

    message = new QLineEdit(this);
    message->setGeometry(0, this->height()-h, this->width()-w, h);

    send = new QPushButton(this);
    send->setGeometry(this->width() - w, this->height() - h, w, h);
    send->setText("Send");

    panel->show();
    message->show();
    send->show();
    message->setFocus();
    connect(send, SIGNAL(clicked()), this, SLOT(send_massage()));
    connect(message, SIGNAL(returnPressed()), this, SLOT(send_massage()));
    show();
}
 void Chwindow::send_massage()
 {
     emit forward(this->message->text());
     this->message->clear();
 }

void Chwindow::new_massage(QString m)
{
    this->panel->append(m);
}