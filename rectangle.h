#include "shape.h"

class Rectangle : public Shape
{
    int dx, dy;

public:
    Rectangle(int x, int y, int dx, int dy, int typeColor);
    void draw(int color);
    void move(int dx, int dy);
};