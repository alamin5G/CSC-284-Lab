/**
 * @file 7temperature.cpp
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
    int cen;
    cin >> cen;
    if(cen<0){
        cout << "Freezing weather" << endl;
    }else if(cen>=0 && cen<=10){
        cout << "Very Cold weather" << endl;
    }else if(cen>10 && cen<=20){
        cout << "Cold weather" << endl;
    }else if(cen>20 && cen<=30){
        cout << "Normal in Temp" << endl;
    }else if(cen>30 && cen<=40){
        cout << "It\'s Hot." << endl;
    }else{
        cout << "It\'s Very Hot." << endl;
    }
    return 0;
}