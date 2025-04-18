#include <iostream>
#include "shape.h"
#include "rectangle.h"
using namespace std;

Rectangle::Rectangle(int x, int y, int dx, int dy, int typeColor) : Shape(x, y, typeColor)
{
    this->dx = dx;
    this->dy = dy;
}

void Rectangle::draw(int color)
{
    cout<<"It is a void Rectangle with:"<<endl;
    cout<<"start coordinates ("<<x<<";"<<y<<")"<<endl;
    cout<<"End coordinates = ("<<dx<<";"<<dy<<")"<<endl;
    cout << "Color of circle" << color << " - ";
    defineTypeColor(color);
}

void Rectangle::move(int dx, int dy)
{
    hide();
    this->x += dx;
    this->y += dy;
    this->dx += dx;
    this->dy += dy;
    show();
}