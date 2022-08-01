#include <iostream>
using namespace std;
class Area{
    int sq, len, bred;

public:
    void area(int length, int bredth){
        len = length;
        bred = bredth;
        cout << "The area of Rectangle is " << len * bred << endl;
    }
    void area(int square){
        sq = square;
        cout << "The area of Square is " << sq*sq << endl;
    }

};

int main(){
    int square, length, bredth;
    cout << "Enter value for calculate square: " << endl;
    cin >> square;
    Area sq;
    sq.area(square);

    cout << "Enter length and breadth for calculate rectangle: " << endl;
    cin >> length >> bredth;
    Area rectangle;
    rectangle.area(length, bredth);

    return 0;
}
