/*Payslip processing program in c++*/
#include <string.h>
#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>


using namespace std;

class Payslip
{
private:
    int id;
    string name;
    string dob;
    string doj;
    string designation;
    string phone;
    string dept;
    double bSalary;
    double travelA;
    double foodA;
    double houseR;
    double medicalA;
    int attendance;
    double grossSalary;
    double deduction;
    double payableSalary;
    double dayAbsent;
    double dayBasicSalary;

public:
    void inputEmployeeInfo();
    void showPaySlip();
};

void Payslip::inputEmployeeInfo()
{
    cout << "Enter ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Date of Birth: ";
    cin >> dob;
    cout << "Enter Date of Joining: ";
    cin >> doj;
    cout << "Enter Designation: ";
    cin.ignore();
    getline(cin, designation);
    cout << "Enter Phone: ";
    cin >> phone;
    cout << "Enter Department: ";
    cin >> dept;
    cout << "Enter Basic Salary: ";
    cin >> bSalary;
    cout << "Enter Travel Allowance: ";
    cin >> travelA;
    travelA = (bSalary * travelA) / 100;
    cout << "Enter Food Allowance: ";
    cin >> foodA;
    foodA = (bSalary * foodA) / 100;
    cout << "Enter House Rent: ";
    cin >> houseR;
    houseR = (bSalary * houseR) / 100;
    cout << "Enter Medical Allowance: ";
    cin >> medicalA;
    medicalA = (bSalary * medicalA) / 100;
    grossSalary = (bSalary + travelA + foodA + houseR + medicalA);
    cout << "Enter Attendance: ";
    cin >> attendance;
    while (attendance > 30)
    {
        cout << "Present Days Can not be higher than 30, enter attendance again.." << endl;
        cin >> attendance;
    }
    dayAbsent = 30 - attendance;

    dayBasicSalary = (bSalary / 30);
    deduction = dayBasicSalary * dayAbsent;
    payableSalary = grossSalary - deduction;
}

void Payslip::showPaySlip()
{
    int day = 30;
    cout << "\t\t\tSharmin Group\n";
    cout << "\t\tPay Slip for the Month of June-2022\n";
    cout << "Basic Information:\n";
    cout << "Employee Id: \t\t\t" << id << endl;
    cout << "Name: \t\t\t\t" << name << endl;
    cout << "Designation: \t\t\t" << designation << endl;
    cout << "Department: \t\t\t" << dept << endl;
    cout << "Date of Birth: \t\t\t" << dob << endl;
    cout << "Date of Joining: \t\t" << doj << endl;
    cout << "Contact: \t\t\t" << phone << endl;
    cout << "\nAttendance Information:\n";
    cout << "Total Days: \t\t\t" << day << endl;
    cout << "Present Days: \t\t\t" << attendance << endl;
    cout << "Absent Days:\t\t\t" << dayAbsent << endl;
    cout << "\nSalary Information:\n";
    cout << "Basic Salary: \t\t\t" << bSalary << endl;
    cout << "House Rent: \t\t\t" << houseR << endl;
    cout << "Food Allowance: \t\t" << foodA << endl;
    cout << "Travel Allowance:\t\t" << travelA << endl;
    cout << "Medical Allowance: \t\t" << medicalA << endl;

    cout << "\n";
    cout << "Total Salary: \t\t\t" << fixed << setprecision(2) << grossSalary << endl;
    cout << "Deduction for absenteeism: \t" << fixed << setprecision(2) << deduction << endl;
    cout << "Total Payable Salary:\t\t" << fixed << setprecision(2) << payableSalary << endl;
    cout << "_____________________________________________________" << endl;
}

int main()
{
    int n;
    cin >> n;
    Payslip emp[n];
    
    for (auto i = 0; i < n; i++)
    {
        emp[i].inputEmployeeInfo();
    }
    
    for (auto i = 0; i < n; i++)
    {
        emp[i].showPaySlip();
    }
    return 0;
}
