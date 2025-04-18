#include "shape.h"

class Circle : public Shape
{
    int R;
public:
    Circle(int x, int y, int R,int typeColor);
    void draw(int color);
};