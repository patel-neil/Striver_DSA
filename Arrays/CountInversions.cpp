#include <bits/stdc++.h>

using namespace std;

int cnt = 0;

void merge(vector<int> &arr,int low, int mid,int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }

        else
        {
            temp.push_back(arr[right]);
            cnt += mid - left + 1;
            right++;
        }
    }

    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low; i<=high; i++)
    {
        arr[i] = temp[i-low];
    }
}

void mergesort(vector<int> &arr, int low, int high)
{
    if(low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void countInversions(vector<int>& nums)
{
    int n = nums.size();
    mergesort(nums, 0, n-1);

    cout << cnt;
}

int main()
{
    vector<int> arr({5,3,2,1,4});

    countInversions(arr);

    return 0;
}