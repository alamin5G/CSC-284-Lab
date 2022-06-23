#include <iostream>
using namespace std;
inline int fibu(int num)
{
    int a=0, b=1, c, i;
    cout << a << " " << b;
    for(i=1; i<=num; i++)
    {
        c = a+b;
        cout << " " << c;
        a=b;
        b=c;
    }
}
int main()
{
    cout << "Enter last range: ";
    int n;
    cin >> n;
    fibu(n);

}
