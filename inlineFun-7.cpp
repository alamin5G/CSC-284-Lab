#include <iostream>
using namespace std;

inline int power(int b, int p){
	int i, r=1;
	for(i=1; i<=p; i++){
		r=r*b;
	}
	return r;
}

int main(){
	int base, exponent;
	cout << "Enter base value: ";
	cin >> base;
	cout << "Enter exponential value: ";
	cin >> exponent;
	cout << "Result is: " << power(base, exponent) << endl;

}
