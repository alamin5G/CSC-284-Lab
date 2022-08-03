/**
 * @file 9-Lab.cpp
 * Suppose you go to an Ice Cream Parlor (ABC Ice Cream) near your home one day
and buy vanilla-flavored ice cream. A week later, while traveling to the town nearby, you spot 
another Ice Cream Parlor (of the same chain, ABC Ice Cream). You went to that shop and found a new 
variant of the Vanilla flavor ice cream, which had a twist of Chocolate flavor. You liked the 
unique taste. Once back home, you again went to the ice cream parlor near your home to get that 
fantastic new flavor of ice cream, but unfortunately, you couldn't because that was a specialty of 
the parlor in the neighboring town. Now which OOP features resemble
the situation? Write a C++ program on it.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
class ABCIceCream{
    public: 
    void getIceCream(){
        cout << "All Ice Cream Flavored available." << endl;
    }
};

class BranchInHouse : public ABCIceCream{
    public:
    void getIceCream(){
        cout << "Vanilla Flavour Ice Cream" << endl;
    }
};
class BranchInTown : public ABCIceCream{
    public:
    void getIceCream(){
        cout << "Chocolate Flavored Ice Cream" << endl;
    }
};
int main(){
    BranchInHouse branch1;
    branch1.getIceCream();

    BranchInTown branch2;
    branch2.getIceCream();
    
    ABCIceCream mainBranch;
    mainBranch.getIceCream();


    return 0;
}