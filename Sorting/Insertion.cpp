#include <iostream>

using namespace std;

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9, 5, 72, 12};

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++)
    {
        for(int j=i; j>0; j--)
        {
            if(arr[j] < arr[j-1])
            {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }   
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}