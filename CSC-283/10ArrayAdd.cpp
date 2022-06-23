/**
 * @file 10ArrayAdd.cpp
 *
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
int main()
{
    cout << "Enter the array size: ";
    int n;
    cin >> n;
    cout << "Enter the first array: ";
    int arr[n], arr2[n], add[n];
    for (auto i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the second array: ";
    for (auto i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    cout << "Output: ";
    for (auto i = 0; i < n; i++)
    {
        add[i] = arr[i] + arr2[i];
        cout << add[i] << "\t";
    }
    cout << endl;

    return 0;
}