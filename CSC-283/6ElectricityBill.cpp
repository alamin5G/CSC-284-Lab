/**
 * @file 6ElectricityBill.cpp
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
    int uid, unit;
    double amount;

    cin >> uid;
    cin >> unit;
    cout << "Customer IDNO:" << uid << endl;
    cout << "unit Consumed:" << unit << endl;
    if(unit>0 && unit<=199){
        cout << "Amount Charges: "<< fixed << setprecision(2) << unit*1.20 << " taka" <<endl;
    }else if(unit>=200 && unit<400){
        cout << "Amount Charges: "<< fixed << setprecision(2) << unit*1.50 << " taka" <<endl;
    }else if(unit>=400 && unit<600){
        cout << "Amount Charges: "<< fixed << setprecision(2) << unit*1.80 << " taka" <<endl;
    }else if(unit>=600){
        cout << "Amount Charges: "<< fixed << setprecision(2) << unit*2.0 << " taka" <<endl;
    }
    return 0;
}