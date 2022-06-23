/**
 * @file 8Salary.cpp
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
    int basicSalary, grossSalary; 
    cout << "Enter basic salary: ";
    cin >> basicSalary;
    if(basicSalary<=20000){
        grossSalary = basicSalary+150+750;
        cout << "Gross Salary = " << grossSalary << endl;
    }else if(basicSalary>=20001 && basicSalary<=40000){
        grossSalary = basicSalary+250+800;
        cout << "Gross Salary = " << grossSalary << endl;
    }else{
        grossSalary = basicSalary+350+900;
        cout << "Gross Salary = " << grossSalary << endl;
    }
    return 0;
}