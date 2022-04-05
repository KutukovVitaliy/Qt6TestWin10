//
// Created by kutuk on 05.04.2022.
//

#ifndef QT6TESTWIN10_IMAGEBUTTON_H
#define QT6TESTWIN10_IMAGEBUTTON_H
#include <QApplication>
#include<QPushButton>
#include <QPixmap>
#include <QPaintEvent>
#include <QPainter>

class ImageButton : public QPushButton{

    Q_OBJECT
public:
    ImageButton() = default;
    ImageButton(QWidget *parent);
    void paintEvent (QPaintEvent *e) override;
    QSize sizeHint() const override;
    QSize minimumSizeHint() const override;
    void keyPressEvent(QKeyEvent *e) override;
public slots:
    void setUp();
    void setDown();

private:
    QPixmap mCurrentButtonPixmap;
    QPixmap mButtonDownPixmap;
    QPixmap mButtonUpPixmap;
    bool isDown = false;

};



#endif //QT6TESTWIN10_IMAGEBUTTON_H
