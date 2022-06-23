#include <iostream>
using namespace std;
inline int decimalN(int n){

	int i=1, j, binaryN=0;

	for(j=n; j>0; j=j/2){
		binaryN=binaryN+(n%2)*i;
		i=i*10;
		n=n/2;
	}
	cout << "Binary Number " << binaryN << endl;
}

int main(){
	int n;
	cout << "Please Enter Decimal number: ";
	cin >> n;
	decimalN(n);
}
