class Shape
{

protected:
    int x;
    int y;
    int typeColor;
public:
    Shape(int x, int y,int typeColor);
    virtual void move(int dx, int dy);
    virtual void draw(int color);
    void setItemsOfShape();
    void defineTypeColor(int color);
    virtual void hide();
    virtual void show();
};
