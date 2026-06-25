#include<bits/stdc++.h>

using namespace std;

void printunion(int arr1[], int arr2[], int n1, int n2)
{
    vector<int> result;

    int i = 0;
    int j = 0;
    while(i < n1 && j < n2)
    {
        if(arr1[i] <= arr2[j])
        {
            if(result.size() == 0 || result.back() != arr1[i])
            {
                result.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if(result.size() == 0 || result.back() != arr2[j])
            {
                result.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i < n1)
    {
        if(result.size() == 0 || result.back() != arr1[i])
            {
                result.push_back(arr1[i]);
            }
        i++;
    }

    while(j < n2)
    {
        if(result.size() == 0 || result.back() != arr2[j])
            {
                result.push_back(arr2[j]);
            }
        j++;
    }

    for(int i=0; i<result.size(); i++)
    {
        cout << result[i] << " ";
    }
}

int main()
{
    int arr1[] = {1,1,2,3,4,4,5,6,7,11};
    int arr2[] = {1,2,3,4,5,6,7,7,8,10};
    
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    printunion(arr1, arr2, n1, n2);
}