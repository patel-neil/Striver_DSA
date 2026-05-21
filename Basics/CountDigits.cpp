//Optimal approach to count digits of a number.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int digits;

    if(n == 0)
    {
        digits = 1;
    }

    else
    {
        digits = (int)log10(n) + 1;
    }
    cout << digits;
}