//Reverse array.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7};

    int n = sizeof(arr) / sizeof(arr[0]);

    int temp;

    for(int i=0; i<n/2; i++)
    {
        for(int j=n-1; j>=n/2; j--)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}