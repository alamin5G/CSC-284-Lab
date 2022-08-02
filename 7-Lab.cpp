/**
 * @file 7-Lab.cpp
 * Write a C++ program to find all pairs of elements 
 * in an array whose sum equals a specified number.
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
    int arr[] = {2, 7, 4, -5, 11, 5, 20};
    int t, specifiedNumber=15;
    for(int i=0; i<7; i++){
        for(int j=i+1; j<7; j++){
            if(arr[i]+arr[j]==specifiedNumber){
                cout << arr[i] << " + " << arr[j] << " = " << arr[i]+ arr[j] << endl;
            }
        }

    }
    return 0;
}