#include "shape.h"
using namespace std;

class Segment : public Shape
{
    int dx, dy;

public:
    Segment(int x, int y, int dx, int dy, int typeColor);
    void draw(int color);
    void move(int dx, int dy);
};