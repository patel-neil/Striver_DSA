#include <iostream>

using namespace std;

int main()
{
    // int n;
    // cin >> n;

    // int arr[n];

    // for(int i=0;i<n; i++)
    // {
    //     cin >> arr[i];
    // }

    int arr2[] = {13, 46, 24, 52, 20, 9};

    int n = sizeof(arr2)/sizeof(arr2[0]);

    for(int i=0; i<n-1 ;i++)
    {
        int min = i;
        for(int j=i; j<n; j++)
        {
            if(arr2[j] < arr2[min])
            {
                min = j;
            }
        }
        int temp;
        temp = arr2[min];
        arr2[min] = arr2[i];
        arr2[i] = temp;
    }


    for(int i=0; i<n; i++)
    {
        cout << arr2[i] << " ";
    }
}