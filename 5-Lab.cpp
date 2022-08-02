/**
 * @file 5-Lab.cpp
 * write a C++ program where you will have to take input of the marks of a 
student for the subject English for both JSC and SSC and find out the HSC marks 
along with the grade of each subject. The Grading Policy is 80-100: Grade A, 70-
79: Grade B, 60-69: Grade C, 50-59: Grade D, and less than 50 fail. 
For example:
In English, the student got 70 in JSC and 90 in SSC. So, his/her marks in HSC for 
English will be (70×25%) + (90×75%) =17.5+67.5 =85 in HSC. grade A.

 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
int main(){
    double engMarkJSC, engMarkSSC, engMarkHSC;
    cout << "Enter JSC English Marks: ";
    cin >> engMarkJSC;
    cout << "Enter SSC English Marks: ";
    cin >> engMarkSSC;
    engMarkJSC = (engMarkJSC*25)/100;
    engMarkSSC = (engMarkSSC*75)/100;
    engMarkHSC = engMarkJSC + engMarkSSC;
    cout << "Got " << engMarkHSC << " in HSC. ";
    if(engMarkHSC>=80 && engMarkHSC<=100){
        cout << "Grade A";
    }else if(engMarkHSC>=70 && engMarkHSC<=79){
        cout << "Grade B";
    }else if(engMarkHSC>=60 && engMarkHSC<=69){
        cout << "Grade C";
    }else if(engMarkHSC>=50 && engMarkHSC<=59){
        cout << "Grade D";
    }else if(engMarkHSC<50){
        cout << "Fail";
    }
    cout << endl;


}