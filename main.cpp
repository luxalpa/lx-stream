#include <QCoreApplication>
#include "LxStream.h"
#include <QDebug>

struct myTestData {
    int topic;
    int size;
    int num;
};

void test();

int main(int argc, char *argv[])
{
    myTestData td;
    td.num = 2;
    td.size = 1;
    td.topic = 65535;

    QCoreApplication a(argc, argv);

//    LxStream d;//("T:/MyFile.txt", LxStream::WriteOnly);
//    d.openFile("T:/MyFile.txt", LxStream::WriteOnly);
//    d.write<int>(100);
//    d.writeZString("Hello, this is my string!");
//    d.write<char>('N');
//    d.write<myTestData>(td);
//    d.close();

    test();

//    test(file);

    return 0;// a.exec();
}
