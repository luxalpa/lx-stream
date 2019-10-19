#include <QDebug>
#include "LxStream.h"

void test()
{
    LxStream t;
    t.openFile("T:/MyFile.txt", LxStream::ReadOnly);
    qDebug() << t.readInt();
    qDebug() << t.read<QString>();
    qDebug() << t.readChar();
}
