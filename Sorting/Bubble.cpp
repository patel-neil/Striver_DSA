#include <iostream>

using namespace std;

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i= n-1; i>=0; i--)
    {
        for(int j=0; j<i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}