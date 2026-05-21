/*Print N prime numbers
If N = 5, then output should be 2 3 5 7 11(5 primes should be printed)
*/

#include <iostream>

using namespace std;

bool prime(int a)
{
    for(int i = 2; i * i<= a; i++)
    {
        if(a%i == 0)
            return false;
    }

    return true;
}
int main()
{
    int n;
    cin >> n;

    int count = 0;

    int num = 2;

    while(count < n)
    {
        if(prime(num))
        {
            cout << num << " ";
            count ++;
        }
        num++;
    }
}