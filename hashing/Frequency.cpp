#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> hashmap;

    for(int i=0; i<n; i++)
    {
        hashmap[arr[i]]++;
    }

    int max = 0;
    int answer;

    for(auto x : hashmap)
    {
        if(x.second > max)
        {
            max = x.second;
            answer = x.first;
        }
    }

    cout << answer << " and frequency is: " << max;
}