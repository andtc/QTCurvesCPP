#include "renderarea.h"
#include <QPaintEvent>
#include <QPainter>
#include <math.h>

RenderArea::RenderArea(QWidget *parent) :
    QWidget(parent),
    mBackgroundColor (0,0,255),
    mShapeColor (255,255,255),
    mShape(Asteroid)
{

}


QSize RenderArea::minimumSizeHint() const
{
    return QSize(100,100);
}
QSize RenderArea::sizeHint() const
{
    return QSize(400,200);
}

QPointF RenderArea::compute_asteroid(float t)
{
    float cos_t=cos(t);
    float sin_t=sin(t);
    float x=2*pow(cos_t,3);
    float y=2*pow(sin_t,3);
    return QPointF(x,y);
}

void RenderArea::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);

    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setPen(mShapeColor);

    switch (mShape)
    {
    case Asteroid:
        mBackgroundColor=Qt::red;
        break;

    case Cycloid:
        mBackgroundColor=Qt::green;
        break;

    case HuygensCycloid:
        mBackgroundColor=Qt::blue;
        break;

    case HypoCycloid:
        mBackgroundColor=Qt::yellow;
        break;

    default:
        break;

    }

    painter.setBrush(mBackgroundColor);
    painter.setPen(mShapeColor);

    //Draw Area
    painter.drawRect(this->rect());

    QPoint center=this->rect().center();
   // painter.drawLine(this->rect().topLeft(),this->rect().bottomRight());
    float intervalLength=2*M_PI;
    int stepCount=264;
    float scale=40;
    float step=intervalLength/stepCount;
    for (float t=0;t<intervalLength;t+=step)
    {
        QPointF point= compute_asteroid(t);

        QPoint pixel;
        pixel.setX(point.x()*scale+center.x());
        pixel.setY(point.y()*scale+center.y());

        painter.drawPoint(pixel);



    }


}
