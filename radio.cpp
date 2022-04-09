#include "radio.h"

radio::radio(QObject *parent)
    : QObject{parent}
{

}

void radio::listen(int chanel, QString name, QString message) {
    qInfo() << chanel << " " << name << " - " << message;
}