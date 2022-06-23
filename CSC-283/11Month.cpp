/**
 * @file 11Month.cpp
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
    cout << "Enter a month name: ";
    int month;
    cin >> month;
    switch (month)
    {
    case 1:
        cout << "Januaray" <<endl;
        break;
    case 2:
        cout << "February" <<endl;
        break;
    case 3:
        cout << "March" <<endl;
        break;
    case 4:
        cout << "April" <<endl;
        break;
    case 5:
        cout << "May" <<endl;
        break;
    case 6:
        cout << "June" <<endl;
        break;
    case 7:
        cout << "July" <<endl;
        break;
    case 8:
        cout << "August" <<endl;
        break;
    case 9:
        cout << "September" <<endl;
        break;
    case 10:
        cout << "October" <<endl;
        break;
    case 11:
        cout << "November" <<endl;
        break;
    case 12:
        cout << "December" <<endl;
        break;
    
    default:
        cout << "Wrong information"<< endl;
        break;
    }
    return 0;
}