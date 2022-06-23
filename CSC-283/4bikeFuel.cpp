/**
 * @file 4bikeFuel.cpp
 * Write a C program to calculate a bike’s average consumption from the given
total distance traveled (in km) and spent fuel (in liters).
Test Data:
Input total distance in km: 350
Input total fuel spent in liters: 5
Expected Output:
Average consumption (km/lt) 70.000
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
    double fuel, distance, avgConsumption;
    cout << "Input total distance in km: ";
    cin >> distance;
    cout << "Input total fuel spent in liters: ";
    cin >> fuel;
    avgConsumption = distance/fuel;
    cout << "Average consumption (km/lt): " << fixed << setprecision(3) << avgConsumption;
    return 0;
}