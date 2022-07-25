#include <iostream>
using namespace std;
class Fruit {
    public:
    int fruits;

};
class Apple : public Fruit{
   public:
    void inputApple(){
        cin >> fruits;
    }
    void showApple(){
        inputApple();
     cout << "Amount of Apple: " << fruits << endl;
    }
};

class Mango : public Fruit{
   public:
    void inputMango(){
        cin >> fruits;
    }
    void showMango(){
        inputMango();
        cout << "Amount of Mango: " << fruits << endl;
    }
};
int main(){
    Mango m;
    m.showMango();
    Apple a;
    a.showApple();

    Fruit f;
    f.fruits = m.fruits + a.fruits;
    cout << "Total Amount of Fruits: " << f.fruits << endl;
    return 0;
}
