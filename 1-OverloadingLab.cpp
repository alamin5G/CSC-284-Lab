#include <iostream>
using namespace std;

class OverloadFunc{
    int a;
    char c;
public:
    void showFunc(int x, char y){
        a = x;
        c = y;
        cout << "Integer is - " << a << " and Character is - " << c << endl;
    }
    void showFunc(char y, int x){
        a = x;
        c = y;
        cout << "Integer is - " << a << " and Character is - " << c << endl;
    }

};

int main(){
    int x;
    char c;

    cout << "Enter the one int and one character value: " << endl;
    cin >> x >> c;

    OverloadFunc funA;
    cout << "First, inputed int value and last inputed char value: " << endl;
    funA.showFunc(x, c);

    cout << "Enter the one char and one int value: " << endl;
    cin >> c >> x;
    cout << "First, inputed char value and last inputed int value: " << endl;
    funA.showFunc(c, x);

    return 0;
}
