#include <iostream>
using namespace std;

inline float area(float r){

	return 3.1416*r*r;
}

int main(){

	float r;
	cout << "Enter radius: ";
	cin >> r;
	cout << "Area of a circle is: " << area(r)<< endl;
	return 0;
}
