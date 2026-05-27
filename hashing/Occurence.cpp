#include <iostream>
#include <unordered_map>
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

    unordered_map<int, int> Hashmap;

    for(int i=0; i<n; i++)
    {
        Hashmap[arr[i]]++;
    }

    for(auto x : Hashmap)
    {
        cout << x.first << " " << x.second << endl;
    }
}