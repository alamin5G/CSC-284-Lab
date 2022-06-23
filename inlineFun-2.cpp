#include <iostream>
using namespace std;
inline int apSeries(int n){
	int a=1, d=2;
	float sum=0;
	sum = (n/2.0)*((2*a)+((n-1)*d));
}

int main(){
	int n;
	cout << "Enter AP series last number: ";
	cin >> n;
	cout << "The sum of AP series is : " << apSeries(n) << endl;
}
