/**
 * @file 4-Lab.cpp
 * Suppose you have a savings account in Dhaka bank. In that account, you have
some transaction records. You get a deposit in your account every month, and you also withdraw some
money monthly. After all of the month’s transactions, only you get to know the total balance
information in your mail sent by the bank
authority.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
class DhakaBank
{
    string name;
    int accountNo;
    string month;
    double deposit;
    double balance;
    double withdraw;
    string email;

public:
    DhakaBank()
    {
        name = "Md. Alamin";
        accountNo = 43629;
        balance = 500;
        email = "alamin5g@yahoo.com";
    }
    void deposits()
    {
        cout << "Enter deposit Date: (ex: 31-July-2022): " << endl;
        cin >> month;
        cout << "Enter Amount: ";
        cin >> deposit;
        balance += deposit;
    }
    void withdrawn()
    {
        cout << "Enter withdraw Date: (ex: 31-July-2022): " << endl;
        cin >> month;
        cout << "Enter Amount: ";
        cin >> withdraw;
        if (withdraw > balance)
        {
            cout << "Insufficient Balance!" << endl;
        }
        else
        {
            cout << "You have withdrawn " << withdraw << " taka." << endl;
            balance -= withdraw;
        }
        
    }

    void sendInfo()
    {
        cout << endl;
        cout << "___________Information of your Account__________\n" << endl;
        cout << setw(10) << name << endl;

        cout << "Account No- " << accountNo << endl;
        cout << setw(10) << email << endl;
        cout << setw(10) << "Remaining Balance: ";
        cout << balance << endl;
    }
};
int main()
{
    DhakaBank alamin;
    alamin.deposits();
    alamin.withdrawn();
    alamin.sendInfo();

    return 0;
}