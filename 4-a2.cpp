/**
 * @file 4-a2.cpp
 * * Anupam was a student of BSN program. He continued his study in BSN for 5 semesters. After 5 semesters he thought to change his department from nursing to CSE.
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
class Credits
{

public:
    string name;
    int creditHour;
    int id;

    void setData()
    {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter credit hours: ";
        cin >> creditHour;
    }

    int findId()
    {
        return id;
    }

    friend void display(Credits ch, int q);
    
};

void display(Credits ch, int q)
    {
        Credits cr;
        if(q!=-1){
            cout << cr.name << " has completed a total of " << ch.creditHour << " Credit Hours. Whom ID NO. is-:" << cr.id << endl;
        }else{
            cout << cr.name << " has completed a total of " << cr.creditHour << " Credit Hours. Whom ID NO. is-:" << cr.id << endl;
        }
    }
int main()
{
    cout << "Enter the N size: ";
    int n;
    cin >> n;
    Credits BSN[n];
    cout << "Enter the Information for BSN Department: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << " Of BSN:" << endl;
        BSN[i].setData();
    }
    Credits CSE[n];
    cout << "Enter the Information for CSE Department: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << " Of CSE:" << endl;
        CSE[i].setData();
    }

    cout << "Enter the ID for BSN and CSE Department which you want to search for: " << endl;

    int cseId, bsnId;
    cin >> bsnId >> cseId;
    int p = -1, q = -1;
    for (int i = 0; i < n; i++)
    {
        if (bsnId == BSN[i].findId())
        {
            p = i;
        }

        if (cseId == CSE[i].findId())
        {
            q = i;
        }
    }

    Credits cr;
    cr.creditHour = CSE[q].creditHour + BSN[p].creditHour;

    if (p != -1 && q != -1)
    {
        cout << "Show the Information for CSE Department: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Student " << i + 1 << " Of CSE:" << endl;
            display(cr, q);
        }
    }
    else
    {
        cout << "ID Not Found!" << endl;
    }

    //incomplete

    return 0;
}
