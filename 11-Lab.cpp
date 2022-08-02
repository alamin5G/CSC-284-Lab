/**
 * @file 11-Lab.cpp
 * Now, store and print the information of an Audi and a Ford car (i.e., model type,
ownership cost, warranty, seating capacity, fuel type, mileage, and price.) Do the
same for a Bajaj and a TVS bike.
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
class Vehicles
{
    protected:
    int mileage, price;
};

class Car : protected Vehicles
{
    protected:
    int cost, warrenty, seat;
    string fuelType;
};

class Bike : protected Vehicles
{
    protected:
    int cylinderNum, gearsNum, fuleTankSize;
    string coolingType, wheelType;
};

class Audi : private Car
{
    string model;
public:
    void input(){
        cout << "Enter Model Type: ";
        getline(cin, model);
        cout << "Enter Ownership Cost: ";
        cin >> cost;
        cout << "Enter warranty: ";
        cin >> warrenty;
        cout << "Enter Seating Capacity: ";
        cin >> seat;
        cout << "Enter Fuel Type: ";
        cin >> fuelType;
        cout << "Enter milage: ";
        cin >> mileage;
        cout << "Enter price: ";
        cin >> price;
    }
    void showInfo(){
        cout << "Model Type: " << model << endl;
        cout << "Ownership Cost: " << cost << endl;
        cout << "warranty: " << warrenty << endl;
        cout << "Seating Capacity: " << seat << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "mileage: " << mileage << endl;
        cout << "price: " << price << endl;
    }
};

class Ford : private Car
{
    string model;
    public: 
    void input(){
        cout << "Enter Model Type: ";
        getline(cin, model);
        cout << "Enter Ownership Cost: ";
        cin >> cost;
        cout << "Enter warranty: ";
        cin >> warrenty;
        cout << "Enter Seating Capacity: ";
        cin >> seat;
        cout << "Enter Fuel Type: ";
        cin >> fuelType;
        cout << "Enter milage: ";
        cin >> mileage;
        cout << "Enter price: ";
        cin >> price;
    }
    void showInfo(){
        cout << "Model Type: " << model << endl;
        cout << "Ownership Cost: " << cost << endl;
        cout << "warranty: " << warrenty << endl;
        cout << "Seating Capacity: " << seat << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "mileage: " << mileage << endl;
        cout << "price: " << price << endl;
    }
};

class Bajaj : private Bike
{
    string makeType;
    public: 
    void input(){
        cout << "Enter make Type: ";
        getline(cin, makeType);
        cout << "Enter the Number of Cylinder: ";
        cin >> cylinderNum;
        cout << "Enter Gears Number: ";
        cin >> gearsNum;
        cout << "Enter fuel Tank Size Capacity: ";
        cin >> fuleTankSize;
        cout << "Enter Cooling Type: ";
        cin >> coolingType;
        cout << "Enter Wheel Type: ";
        cin >> wheelType;
        cout << "Enter milage: ";
        cin >> mileage;
        cout << "Enter price: ";
        cin >> price;
    }
    void showInfo(){
        cout << "make Type: " << makeType << endl;
        cout << "the Number of Cylinder: " << cylinderNum << endl;
        cout << "Gears Number: " << gearsNum << endl;
        cout << "fuel Tank Size Capacity: " << fuleTankSize << endl;
        cout << "Cooling Type: " << coolingType << endl;
        cout << "Wheel Type: " << wheelType << endl;
        cout << "milage: " << mileage << endl;
        cout << "price: " << price << endl;
    }
};

class TVS : private Bike
{
    string makeType;
    public:
    void input(){
        cout << "Enter make Type: ";
        getline(cin, makeType);
        cout << "Enter the Number of Cylinder: ";
        cin >> cylinderNum;
        cout << "Enter Gears Number: ";
        cin >> gearsNum;
        cout << "Enter fuel Tank Size Capacity: ";
        cin >> fuleTankSize;
        cout << "Enter Cooling Type: ";
        cin >> coolingType;
        cout << "Enter Wheel Type: ";
        cin >> wheelType;
        cout << "Enter milage: ";
        cin >> mileage;
        cout << "Enter price: ";
        cin >> price;
    }
    void showInfo(){
        cout << "make Type: " << makeType << endl;
        cout << "the Number of Cylinder: " << cylinderNum << endl;
        cout << "Gears Number: " << gearsNum << endl;
        cout << "fuel Tank Size Capacity: " << fuleTankSize << endl;
        cout << "Cooling Type: " << coolingType << endl;
        cout << "Wheel Type: " << wheelType << endl;
        cout << "milage: " << mileage << endl;
        cout << "price: " << price << endl;
    }
};

int main(){
    Audi audi;
    audi.input();
    audi.showInfo();

    Ford ford;
    ford.input();
    ford.showInfo();

    Bajaj bajaj;
    bajaj.input();
    bajaj.showInfo();

    TVS tvs;
    tvs.input();
    tvs.showInfo();

}
