#include <iostream>
using namespace std;
inline void floyd(int num){
	int i, j;

	for(i=1; i<=num; i++){
		for(j=1; j<=i; j++){
			cout << "*";
		}
		cout << endl;
	}

}
int main(){
	cout << "Enter row size: ";
	int n;
	cin >> n;
	floyd(n);
	return 0;
}
