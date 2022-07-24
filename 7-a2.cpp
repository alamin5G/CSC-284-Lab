/**
 * @file 7-a2.cpp
 * Anupam was a student of BSN program. He continued his study in BSN for 5 semesters. After 5 semesters he thought to change his department from nursing to CSE. 
 * In CSE department he enrolled himself under BCSE Program. While studying BCSE program, he found that he has got weaver for 15 courses. 
 * That means he completed 45 credit hour in his previous program. Which he need not to do again in BCSE. In BCSE Anupam has completed 18 credit hour.
1. Now write a program using C++ to find how many credit hours Anupam has completed. NB: Use a member function which will take object as argument or perimeter.
2. Modify the above scenario from “n” numbers of student. Here user will search for 2 id of different programs and sum their completed credit hours and assigned to the second ID.
3. Modify question no.1 using “Friend Function”.
4. Use “Friend Function” to solve question no.2.
5. Modify question 1 and solve it using passing object to Friend Function
6. Modify question 2 and solve it using passing object to Friend Function
7. Modify question 1 and use constructor to take input
8. Modify question 2 and use parameterized constructor to assign the values
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
class Credits{
    string name;
    int id;
    int creditHour;
    public:
    Credits(){
        name = "Anupam";
        cout << "Enter Anupam ID: ";
        cin >> id;
        cout << "Enter Anupam credit hours: ";
        cin >> creditHour;
    }

    void display(Credits BSN, Credits CSE){
        creditHour = BSN.creditHour + CSE.creditHour;
        id = CSE.id;
        cout << name << " has completed a total of " << creditHour << " Credit Hours. Whom ID NO. is-:" << id << endl;
    }

};

int main(){
    
    cout << "Enter the Information for BSN Department: " << endl;
    Credits BSN;    
    cout << "Enter the Information for CSE Department: " << endl;
    Credits CSE;
    CSE.display(BSN, CSE);
    
    return 0;
}