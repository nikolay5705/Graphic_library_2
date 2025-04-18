#include <iostream>
#include "shape.h"
#include "segment.h"
using namespace std;

Segment::Segment(int x, int y, int dx, int dy, int typeColor):Shape(x,y,typeColor)
{
    this->dx = dx;
    this->dy = dy;
}

void Segment::draw(int color)
{
    cout<<"It is a void Segment with:"<<endl;
    cout<<"start coordinates ("<<x<<";"<<y<<")"<<endl;
    cout<<"End coordinates = ("<<dx<<";"<<dy<<")"<<endl;
    cout << "Color of circle" << color << " - ";
    defineTypeColor(color);
}

void Segment::move(int dx, int dy)
{
    hide();
    this->x += dx;
    this->y += dy;
    this->dx += dx;
    this->dy += dy;
    show();
}