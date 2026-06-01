#include <iostream>
using namespace std;

void insertion_sort(int a[], int i, int n)
{
    if(i == n) return;

    for(int j = i; j > 0; j--)
    {
        if(a[j] < a[j-1])
        {
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
        }
    }

    insertion_sort(a, i + 1, n);
}


int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9, 15, 1};

    int n = sizeof(arr)/sizeof(arr[0]);

    insertion_sort(arr, 0 , n);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}