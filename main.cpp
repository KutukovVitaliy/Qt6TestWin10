#include <QApplication>
//#include <QTimer>
//#include <QSlider>
//#include <QSpinBox>
//#include "Printer.h"
#include <iostream>
#include "ImageButton.h"

int main(int argc, char **argv) {
    QApplication a(argc, argv);
   /* QTimer myTimer;
    Printer myPrinter;
    QObject::connect(&myTimer,&QTimer::timeout, &myPrinter, &Printer::PrintFinished);
    auto* slider = new QSlider(Qt::Horizontal);
    auto* spin = new QSpinBox();
    slider->setMinimum(0);
    slider->setMaximum(100);
    spin->setMinimum(0);
    spin->setMaximum(100);
    QObject::connect(slider, &QSlider::valueChanged, spin, &QSpinBox::setValue);
    QObject::connect(spin, &QSpinBox::valueChanged, slider, &QSlider::setValue);
    slider->resize(200,20);
    spin->resize(30,30);
    slider->move(500, 300);
    spin-> move(600, 500);
    slider->show();
    spin->show();
    myTimer.start(3000);*/
    ImageButton redButton(nullptr);
    redButton.setFixedSize(100,100);
    redButton.move(100,100);
    QObject::connect(&redButton, &QPushButton::clicked, [](){std::cout <<"Clicked" << std::endl;});
    redButton.show();
    return QApplication::exec();
}
