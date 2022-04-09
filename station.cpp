#include "station.h"

station::station(QObject *parent, int i_channel, QString i_name)
    : QObject{parent}
{
    this->channel = i_channel;
    this->name = i_name;
}

void station::broadcast(QString message) {
    emit send(this->channel, this->name, message);
}
