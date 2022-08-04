/**
 * @file 5-inherit.cpp
 *
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-05
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
class Shape
{
public:
    void output()
    {
        cout << "This is a shape." << endl;
    }
};

class Polygon : public Shape
{
public:
    void output()
    {
        cout << "Polygon is a shape." << endl;
    }
};
class Rectangle : public Polygon
{
public:
    void output()
    {
        cout << "Rectangle is a Polygon." << endl;
    }
};
class Triangle : public Polygon
{
public:
    void output()
    {
        cout << "Triangle is a Polygon." << endl;
    }
};
class Square : public Rectangle
{
public:
    void output()
    {
        cout << "Square is a Rectangle." << endl;
    }
};
int main()
{
    Shape sp;
    sp.output();
    Polygon pl;
    pl.output();
    Rectangle rc;
    rc.output();
    Triangle tr;
    tr.output();
    Square sq;
    sq.output();
    

    return 0;
}