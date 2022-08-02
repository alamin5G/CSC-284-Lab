/**
 * @file 8-Lab.cpp
 * Write a program that accepts three numbers from the user and prints "increasing" 
 * if the numbers are in increasing order, "decreasing" if the numbers are in decreasing order, 
 * and "Neither increasing nor decreasing order" otherwise
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
    int a, b, c;
    cout << "Enter 3 separate number: ";
    cin >> a >> b >> c;
    if(a < b && b < c){
        cout << "Increasing Order!" << endl;
    }else if(a > b && b > c){
        cout << "Decreasing Order!" << endl;
    }else {
        cout << "Neither increasing nor decreasing order" << endl;
    }

    return 0;
}