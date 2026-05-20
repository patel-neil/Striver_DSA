//Print numbers from N to 1

#include <iostream>
using namespace std;


void fun(int i, int n)
{
    if(i > n)
    {
        return;
    }
    cout << n  << " ";
    fun(i, n-1);
}
int main()
{
    int n;
    int i = 1;

    cin >> n;

    fun(i,n);
}