#include <iostream>
using namespace std;
class Mammals{
    public:
        void typeOfMammals(){
            cout << "I am a mammal." << endl;
        }
};

class MarineAnimals{
    public:
        void typeOfMarineAnimals(){
            cout << "I am a marine animal." << endl;
        }
};

class BlueWhale : public Mammals, public MarineAnimals{
    public:
        void typeOfBlueWhales(){
            cout << "I belong the both of the categories: Mammals as well as Marine Animals." << endl;
        }
};

int main(){
    Mammals m;
    m.typeOfMammals();
    MarineAnimals ma;
    ma.typeOfMarineAnimals();
    BlueWhale bw;
    bw.typeOfBlueWhales();
    bw.typeOfMarineAnimals();
    bw.typeOfMammals();



    return 0;
}
