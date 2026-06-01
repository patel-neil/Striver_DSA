#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    if(n == 1) return;

    int didswap = 0;

    for(int i=0; i<=n-2; i++)
    {
        if(arr[i] > arr[i+1])
        {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            didswap = 1;
        }
    }

    if(didswap == 0) return;
    
    bubble_sort(arr, n-1);
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    
    int n = sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr, n);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}