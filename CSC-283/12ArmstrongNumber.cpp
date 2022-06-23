/**
 * @file 12ArmstrongNumber.cpp
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
int main(){
    cout << "Enter a number to check whether this number equals the sum of cubes of its digits or not: ";
    long long int a, rem, sum=0, temp;
    cin >> a;
    temp = a;
    while(a!=0){
        rem = a%10;
        sum = sum + rem * rem * rem;
        a = a/10;
    }

    if(temp == sum){
        cout << "Yes, this number equals the sum of cubes of its digits. " << temp << " = " << sum << endl;
    }else{
        cout << "No, this number not equals the sum of cubes of its digits. " << temp << " = " << sum << endl;
    }
    return 0;
}