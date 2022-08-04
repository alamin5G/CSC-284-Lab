/**
 * @file 1-lab.cpp
 * 
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
class Contacts{
    protected: 
    string name;
    string personalNumber;
    string officialNumber;

    public: 
        Contacts(){
            name = "Unknown";
            personalNumber = "";
            officialNumber = "";
        }
    void display(){
        cout << name << endl;
        cout << "Personal: " << personalNumber << endl;
        if(!officialNumber.empty()){
            cout << "Office: " << officialNumber << endl;
        }
        cout << endl;
    }

};
class MyContacts : public Contacts{
    public: 
    MyContacts(string name, string pn){
        this->name = name;
        personalNumber = pn;
    }
    MyContacts(string name, string pn, string on){
        this->name = name;
        personalNumber = pn;
        officialNumber = on;
    }
};

class FriendContacts : public Contacts{
    public: 
    FriendContacts(string name, string pn){
        this->name = name;
        personalNumber = pn;
    }
    FriendContacts(string name, string pn, string on){
        this->name = name;
        personalNumber = pn;
        officialNumber = on;
    }
};
int main(){
    FriendContacts fc("Alamin", "01822679672");
    fc.display();
    MyContacts mc("Shakib", "01912345678", "01712345678");
    mc.display();


}