#include <iostream>
using namespace std;
inline long cube(int x){
	return x*x*x;
}

int main(){
	int n;
	cout << "Enter any integer value: ";
	cin>> n;
	cout << "Cube of " << n << " is : " << cube(n);
	return 0;
}
