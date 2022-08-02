/**
 * @file 6-Lab.cpp
 * A constructor in C++ is a unique method automatically called when an object of a 
class is created. A destructor function cleans up any resources allocated to an 
object. In a class, there are three constructors. To clean up the allocated resources, 
create a destructor function. 
Write a C++ program on the above concept where the Name of the Class will be 
your name. The member variable should show your age and height
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
class Alamin{
    int age, height;
    public:
    Alamin(){
        age = 0;
        height = 0;
    }
    Alamin(int age, int height){
        this->age = age;
        this->height = height;
    }
    Alamin(Alamin &a){
        cout << "Age = " << a.age <<  " and Height = " << a.height << endl;
    }

    ~Alamin(){
        cout << "Memory cleaned!" << endl;
    }
};
int main(){
    string a = "String is passing in constructor";
    int age, height;
    cout << "Enter age and Height (cm): " << endl;
    cin >> age >> height;
    Alamin info(age, height);
    Alamin show(info);


}