#include <iostream>

using namespace std;

int index(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j)
    {
        while(arr[i] <= pivot && i <= high )
        {
            i++;
        }

        while(arr[j] > pivot && j >= low)
        {
            j--;
        }

        if(i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);

    return j;
}


void QS(int arr[], int low, int high)
{
    if(low < high)
    {
        int partition = index(arr, low, high);

        QS(arr, low, partition - 1);
        QS(arr, partition + 1, high);
    }
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9, 5, 72, 12};

    int n = sizeof(arr)/sizeof(arr[0]);

    QS(arr, 0, n-1);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}