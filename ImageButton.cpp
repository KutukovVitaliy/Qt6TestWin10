//
// Created by kutuk on 05.04.2022.
//
#include "ImageButton.h"

ImageButton::ImageButton(QWidget *parent) {
    setParent(parent);
    setToolTip("ImageButton");
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    mButtonUpPixmap = QPixmap("button_circle_off.jpg");
    mButtonDownPixmap = QPixmap("button_circle.jpg");
    mCurrentButtonPixmap = mButtonUpPixmap;
    setGeometry(mCurrentButtonPixmap.rect());
    connect(this, &QPushButton::clicked, this, &ImageButton::setDown);
}

void ImageButton::paintEvent(QPaintEvent *e) {
    QPainter p(this);
    p.drawPixmap(e->rect(), mCurrentButtonPixmap);
}

QSize ImageButton::sizeHint() const {
    return QSize(100,100);
}
QSize ImageButton::minimumSizeHint() const {
    return QSize(100,100);
}

void ImageButton::keyPressEvent(QKeyEvent *e) {
    setDown();
}

void ImageButton::setDown() {
    mCurrentButtonPixmap = mButtonDownPixmap;
    update();
}

void ImageButton::setUp() {
    mCurrentButtonPixmap = mButtonUpPixmap;
    update();
}
