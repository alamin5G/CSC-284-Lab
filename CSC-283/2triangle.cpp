/**
 * @file 2triangle.cpp
 * A triangle is a polygon with three edge and three vertices. It has three angles on three edges. You have to tak the input of the three angles and find out wheather the triangle is valid or not.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-05-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c; 
    cout << "Input 3 angle values a, b, and c: ";
    cin >> a >> b >> c;
    if((b+c>a) && (c+a>b) && (a+b>c)){
        cout << "Triangle is valid!" << endl;
    } else{
        cout << "Triangle is not valid!" << endl;
    }
    return 0;
}