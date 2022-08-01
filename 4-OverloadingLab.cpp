#include <bits/stdc++.h>
using namespace std;
class Bank{
    int getBalance(){
        return 0;
    }
};
class BankA : public Bank{
    int a;
    public:
        void deposite() {
            cout << "Enter amount for Bank A: ";
            cin >> a;
        }
    int getBalance(){
        return a;
    }
};
class BankB : public Bank{
    int a;
    public:
        void deposite() {
            cout << "Enter amount for Bank B: ";
            cin >> a;
        }
    int getBalance(){
        return a;
    }
};
class BankC : public Bank{
    int a;
    public:
        void deposite() {
            cout << "Enter amount for Bank C: ";
            cin >> a;
        }
    int getBalance(){
        return a;
    }
};
int main(){

    BankA ba;
    ba.deposite();
    BankB bb;
    bb.deposite();
    BankC bc;
    bc.deposite();
    cout << "Balance of Bank A: " <<  ba.getBalance() << endl;
    cout << "Balance of Bank B: " <<  bb.getBalance() << endl;
    cout << "Balance of Bank C: " <<  bc.getBalance() << endl;

}
