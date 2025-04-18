#include <iostream>
#include "shape.h"
#include "graphics.h"
using namespace std;

void Shape::hide()
{
    cout << endl;
    draw(0);
    cout << "Shape is hidden" << endl;
}

Shape::Shape(int x, int y, int typeColor){
    this->x = x;
    this->y = y;
    this->typeColor = typeColor;
}

void Shape::show()
{
    cout << endl;
    draw(this->typeColor);
    cout << "Shape was recreated" << endl;
}

void Shape::move(int dx, int dy)
{
    hide();
    this->x += dx;
    this->y += dy;
    show();
}

void Shape::draw(int color)
{
    cout << "Color of shape" << color << " - ";
    defineTypeColor(color);
}

void Shape::defineTypeColor(int color)
{
    switch (this->typeColor)
    {
    case 0:
        cout << " non color " << endl;
        break;
    case 1:
        cout << " red " << endl;
        break;
    case 2:
        cout << " blue " << endl;
        break;
    case 3:
        cout << " green " << endl;
        break;
    default:
        cout << " type not defined " << endl;
        break;
    }
}

void Shape::setItemsOfShape()
{
    cout << "Enter what you need to set" << endl;
}
