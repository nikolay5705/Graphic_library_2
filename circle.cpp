#include <iostream>
#include "shape.h"
#include "circle.h"
#include "graphics.h"
using namespace std;

Circle::Circle(int x, int y, int R, int typeColor) : Shape(x, y, typeColor)
{
    this->R = R;
}

void Circle::draw(int color)
{
    cout<<"It is a circle with coordinates ("<<x<<";"<<y<<") and R = "<<R<<endl;
    cout << "Color of circle" << color << " - ";
    defineTypeColor(color);
}

