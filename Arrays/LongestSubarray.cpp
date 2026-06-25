//Longest subarray with given sum K(positives)

#include <bits/stdc++.h>

using namespace std;

void subarray(int arr[], int n, int k)
{
    int left = 0, right = 0;
    int sum = arr[left];
    int length = 0;

    while(right < n)
    {
        while(left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }

        if(sum == k)
        {
            length = max(length, right - left + 1);
        }

        right++;
        if(right < n)
        {
            sum += arr[right];
        }
    }

    cout << length;
}


int main()
{
    int arr[] = {1,2,1,3,3,3,1,1,1};

    int n = sizeof(arr)/ sizeof(arr[0]);

    int k = 6;

    subarray(arr, n , k);
}