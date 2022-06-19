#include "Point.h"

Point::Point()
{
    X = 10;
    Y = 15;
}
Point::Point(int X_Point, int Y_Point)
{
    X = X_Point;
    Y = Y_Point;
}
void Point::SetX(int X_Set)
{
    X = X_Set;
}
void Point::SetY(int Y_Set)
{
    Y = Y_Set;
}

int Point::GetX()
{
    return X;
}
int Point::GetY()
{
    return Y;
}

int Point::ToUp(int q)
{
    Y -= q;
}
int Point::ToDown(int q)
{
    Y += q;
}
int Point::ToLeft(int q)
{
    X -= q;
}
int Point::ToRight(int q)
{
    X += q;
}

void Point::Print()
{
    for (int y = 0; y < width; y++)
    {
        for (int x = 0; x < height; x++)
        {
            if (y != Y || x != X)
            {
                cout << " ";
            }
            else
            {
                cout << ".";
            }
        }
        cout << "\n";
    }
}


int main()
{
    
}
