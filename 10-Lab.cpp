/**
 * @file 10-Lab.cpp
 * Create a Class called TestClass with a method called Batch.
Create another class called ClassOne.
And create a method with the name SectionA and inherit the Class TestClass.
Create another class called ClassTwo.
And make two methods with the name SectionC and SectionD. And inherit the Class TestClass.
Now access all the classes from another class named School.
Create an object of the three types and access the methods from each category.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
using namespace std;
class TestClass
{
public:
    void Batch()
    {
        cout << "This is batch of TestClass" << endl;
    }
};
class ClassOne : public virtual TestClass
{
public:
    void SectionA()
    {
        cout << "This is SectionA of ClassOne" << endl;
    }
};
class ClassTwo : public virtual TestClass
{
public:
    void SectionC()
    {
        cout << "This is SectionC of ClassTwo" << endl;
    }
    void SectionD()
    {
        cout << "This is SectionD of ClassTwo" << endl;
    }
};
class School : public ClassOne, public ClassTwo{

};
int main()
{
    School school;
    school.Batch(); // accessing TestClass
    school.SectionA(); // accessing ClassOne
    school.SectionC(); //accessing classTwo
    school.SectionD(); //accessing classTwo

    return 0;
}