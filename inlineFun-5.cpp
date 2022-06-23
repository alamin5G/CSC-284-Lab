#include <iostream>
using namespace std;
inline float kg(float p){
	return p*0.453592;
}

int main(){
	float pound;
	cout << "Enter Weight in Pound: ";
	cin >> pound;
	cout << pound << " pounds = " << kg(pound) << " Kilogram." << endl;
}
