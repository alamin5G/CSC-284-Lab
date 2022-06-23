/**
 * @file 3HCF.cpp
 * Write a cpp program to find the HCF in the following way
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

int HCF(int a, int b);

int main()
{
    int a, b, rem, temp;
    cout << "Enter 2 values (a, b) for calculate the HCF: ";
    cin >> a >> b;
    
    if(a<b){
        a = a+b;
        b = a - b;
        a = a - b;
    }

    cout << "HCF of " << a << " and " << b << " = " << HCF(a, b);
    return 0;
}

int HCF(int a, int b)
{
    int temp, rem;
    while(b!=0){
        rem = a%b;
        if(rem != 0){
            temp = rem;
            b = b%rem;
        }else{
            temp = b;
            b = rem%b;
        }
    }

    return temp;
}