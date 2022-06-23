/**
 * @file 5pair.cpp
 * Write a C program to check whether two numbers in a pair are in ascending order or descending order.
Test Data :
Input a pair of numbers (for example 10,2: 2,10):
Input the first number of the pair: 10
Input the second number of the pair: 2
Expected Output:
The pair is in descending order!
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-05-18
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int first, last;
    cout << "Input the first number of the pair: ";
    cin >> first;
    cout << "Input the second number of the pair: ";
    cin >> last;

    if (first < last)
    {
        cout << "The pair is in asscending order!" << endl;
    }
    else
    {
        cout << "The pair is in descending order!" << endl;
    }

    return 0;
}