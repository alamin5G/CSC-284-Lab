/**
 * @file 1temperature.cpp
 * Write a cpp program that will take the temperature input in Celsius and give the output in Fahrenheit.
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
    double cel, far;
    cout << "Enter your temperature in Celsius: ";
    cin >> cel;
    far = (cel*9)/5+32;
    cout << "Fahrenheit : " <<fixed << setprecision(2)<< far << endl;
    return 0;
}