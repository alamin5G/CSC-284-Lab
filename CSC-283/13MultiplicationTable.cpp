/**
 * @file 13MultiplicationTable.cpp
 * 2 to N multiplication table
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
    int n;
    cout << "Enter the Last range for the multiplication table: ";
    cin >> n;
    for(auto i =2; i<=n; i++){
        for(auto j = 1; j<=10; j++){
            cout << i << " x " << j << " = " << i*j << endl;
        }
        cout << "\n\n";
    }
    return 0;
}