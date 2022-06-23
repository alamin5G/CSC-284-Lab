/**
 * @file 14MatrixManipulation.cpp
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

void Input(int a[5][5]);
void Print(int a[5][5]);
void Addition(int a[5][5], int b[5][5]);
void Subtraction(int a[5][5], int b[5][5]);
void Multiplication(int a[5][5], int b[5][5]);
void Transpose(int a[5][5]);

int main()
{
    int a[5][5], b[5][5], choice;

first:
    cout << "\nChoose the matrix operation," << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Transpose" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter matrix 1 value: " << endl;
        Input(a);
        cout << "Enter matrix 2 value: " << endl;
        Input(b);
        cout << "Print matrix 1 value: " << endl;
        Print(a);
        cout << "Print matrix 2 value: " << endl;
        Print(b);
        cout << "Addition of 2 matrix: " << endl;
        Addition(a, b);
        break;
    case 2:
        cout << "Enter matrix 1 value: " << endl;
        Input(a);
        cout << "Enter matrix 2 value: " << endl;
        Input(b);
        cout << "Print matrix 1 value: " << endl;
        Print(a);
        cout << "Print matrix 2 value: " << endl;
        Print(b);
        cout << "Subtraction of 2 matrix: " << endl;
        Subtraction(a, b);
        break;

    case 3:
        cout << "Enter matrix 1 value: " << endl;
        Input(a);
        cout << "Enter matrix 2 value: " << endl;
        Input(b);
        cout << "Print matrix 1 value: " << endl;
        Print(a);
        cout << "Print matrix 2 value: " << endl;
        Print(b);
        cout << "Multiplication of 2 matrix: " << endl;
        Multiplication(a, b);
        break;
    case 4:
        cout << "Enter matrix 1 value: " << endl;
        Input(a);
        cout << "Print matrix 1 value: " << endl;
        Print(a);
        cout << "Transpose of 1 matrix: " << endl;
        Transpose(a);
        break;
    case 5:
        exit(0);

    default:
        cout << "Invalid Input." << endl;
        cout << "Please enter the correct Input." << endl;
        break;
    }

    return 0;
}

void Input(int a[5][5])
{

    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
}

void Print(int a[5][5])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void Addition(int a[5][5], int b[5][5])
{
    int i, j, c[5][5];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }
}

void Subtraction(int a[5][5], int b[5][5])
{
    int i, j, c[5][5];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
            cout << c[i][j] << "\t";
        }
        cout << endl;
        ;
    }
}

void Multiplication(int a[5][5], int b[5][5])
{
    int i, j, k, sum = 0, c[5][5];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            cout << c[i][j] << "\t";
            sum = 0;
        }
        cout << endl;
    }
}

void Transpose(int a[5][5])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[j][i] << "\t";
        }
        cout << endl;
    }
}