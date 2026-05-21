#include <iostream>

using namespace std;


int GCD(int a, int b)
{
    if(a < b)
        return GCD(b,a);

    if(b == 0)
        return a;
    
    return GCD(b, a % b);
}

int main()
{
    int n1,n2;

    cin >> n1;
    cin >> n2;

    int n = GCD(n1,n2);

    cout << n;
}