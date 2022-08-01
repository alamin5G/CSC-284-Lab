#include <iostream>
using namespace std;
class Student{
    string name, address;
    int age;
public:
    Student(){
        name = "unknown";
        age = 0;
        address = "not available.";
    }

    void setInfo(string n, int a){
        name = n;
        age = a;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << endl;
    }
    void setInfo(string n, int a, string add){
        name = n;
        age = a;
        address = add;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Address : " << address << endl;
        cout << endl;
    }

};
int main(){
    string name[10], address[10];
    int age[10];

    Student st[10];
    cout << "Enter Name, age and address respectively:  " << endl;
    for(int i=0; i<3; i++){
        cout << "Student " <<i+1 << ": " << endl;
        getline(cin, name[i]);
        cin >> age[i];
        cin.ignore();
        getline(cin, address[i]);
    }
    cout << endl;
    cout << "Printing the 10 students information: (name and age) :" << endl;

        for(int i=0; i<3; i++){
        cout << "Student " <<i+1 << ": " << endl;
        st[i].setInfo(name[i], age[i]);
    }
    cout << endl;
    cout << "Printing the 10 students information: (name, age, address) :" << endl;

        for(int i=0; i<3; i++){
        cout << "Student " <<i+1 << ": " << endl;
        st[i].setInfo(name[i], age[i], address[i]);
    }

    return 0;
}


