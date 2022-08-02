/**
 * @file 2-Lab.cpp
 * Write a C++ program that reads a floating-point number. If the number is zero, it
prints "zero"; otherwise, print "positive" or "negative.” Add "small" if the absolute
value of the number is less than one or "large" if it exceeds 1,000,000.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
int main(){
    float an;
    cout << "Enter an number: ";
    cin >> an;

    if(an==0){
        cout << "zero";
        cout << " and small." << endl;
    }else if(an<0){
        cout << "negative";
        cout << " and small." << endl;
    }else if(an>0){
        cout << "positive";
        if(an>1000000){
            cout << " and large." << endl;
        }
    }

}