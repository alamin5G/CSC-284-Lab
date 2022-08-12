/**
 * @file inheritancePractice.cpp
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
class Shape{
    public:
    void print(){
        cout << "This is a shape." << endl;
    }
};

class Polygon : public Shape{
    public:
    void print(){
        cout << "Polygon is a shape." << endl;
    }
};
class Rectangle : public Polygon{
    public:
    void print(){
        cout << "Rectangle is a Polygon."<< endl;
    }
};
class Triangle : public Polygon{
    public:
    void print(){
        cout << "Triangle is a Polygon."<< endl;
    }
};
class Square : public Rectangle{
    public:
    void print(){
        cout << "Square is a Rectangle."<< endl;
    }
};

int main(){
    Shape sp;
    sp.print();
    Polygon pl;
    pl.print();
    Rectangle rc;
    rc.print();
    Triangle tr;
    tr.print();
    Square sq;
    sq.print();
}


