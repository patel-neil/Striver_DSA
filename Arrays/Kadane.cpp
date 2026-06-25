//Kadane's Algorithm : Maximum Subarray Sum in an Array

#include <bits/stdc++.h>

using namespace std;

void kadane(int nums[], int n)
{
    int max = INT_MIN;
    int sum = 0;
    int arrstart = -1;
    int arrend = -1;
    int start = 0;

    for(int i=0; i<n; i++)
    {
        if(sum == 0)
        {
            start = i;
        }

        sum += nums[i];

        if(sum > max)
        {
            max = sum;
            arrstart = start;
            arrend = i;
        }

        if(sum < 0)
        {
            sum = 0;
        }
    }

    for(int i = arrstart; i<=arrend; i++)
    {
        cout << nums[i] << " ";
    }
}


int main()
{
    int arr[] = {2,3,-5,-2,7,-4};

    int n = sizeof(arr)/sizeof(arr[0]);

    kadane(arr, n);
}