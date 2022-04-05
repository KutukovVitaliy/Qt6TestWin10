//
// Created by kutuk on 05.04.2022.
//

#ifndef QT6TESTWIN10_PRINTER_H
#define QT6TESTWIN10_PRINTER_H
#include "QApplication"
#include <iostream>

class Printer : public QObject
{
    Q_OBJECT

public slots:
    void PrintFinished()
    {
        std::cout << "Finished" << std::endl;
    }

public:
    virtual ~Printer(){}
};


#endif //QT6TESTWIN10_PRINTER_H
