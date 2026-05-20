//Print number from 1 to N linearly.

#include <iostream>
using namespace std;

void printing(int n)
{
    static int count = 1;

    if(count > n)
    {
        return;
    }
    cout << count << " ";
    count++;
    printing(n);
}

int main()
{
    int n;


    cout << "Enter the number till which you want to print: ";

    cin >> n;

    printing(n);
}