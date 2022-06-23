/**
 * @file 15TeacherNumber.cpp
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
void teacherAddition(int *listNumber, int listSize, int teacherNumber);
int main()
{
    int i, next, temp, s, n, f = 0;
    cout << "Enter the list size: " << endl;
    cin >> n;
    int lis[n];
    cout << "Enter the list value: " << endl;
    for (i = 1; i <= n; i++)
    {
        cin >> lis[i];
    }

    cout << "teacher is telling, the number is: ";
    cin >> s;
    teacherAddition(lis, n, s);

    return 0;
}

void teacherAddition(int *listNumber, int listSize, int teacherNumber)
{
    int i, next, f = 0;
    for (i = 1; i <= listSize; i++)
    {
        for (next = i + 1; next <= listSize; next++)
        {
            if (teacherNumber == listNumber[i] + listNumber[next])
            {
                f++;
                cout << teacherNumber << " is addition of this " << listNumber[i] << " and " << listNumber[next] << " numbers." << endl;
            }
        }
        // if we get our result, so don't need to continue the outer loop also.
        if (f == 1)
        {
            break;
        }
    }

    if (f == 0)
    {
        cout << "Sir, there\'s no pair of numbers equal to your " << teacherNumber << " number." << endl;
    }
}