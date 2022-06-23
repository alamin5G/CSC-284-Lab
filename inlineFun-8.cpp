#include <iostream>
using namespace std;

inline int sum(){
	int sum=0;
	int i;
	for (i=100; i<=200; i++){
		if(i%9==0){
			sum = sum + i;
		}
	}
	return sum;
}

int main(){
	cout << "The sum of all integer between 100 and 200 which are divisible by 9 is: " << sum();
	return 0;
}
