/**
 * @file lab-question.cpp
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
class Student{
    string name;
    int id;
    int creditHours;
    
    public:
        void input(){
            cout << "Enter the information : \n";
            cin >> name;
            cin >> id;
            cin >> creditHours;
        }

        void output(Student bsn, Student cse){
            cout << "The information of " << name << " is: " << endl;
            cout << "ID" << setw(10) << id << endl;
            cse.creditHours += bsn.creditHours;
            cout << "completed credit hours: "<< cse.creditHours << endl;
        }
};

int main(){
    Student anupomBsn;
    anupomBsn.input();
    Student anupomCse;
    anupomCse.input();
    anupomCse.output(anupomBsn, anupomCse);
}