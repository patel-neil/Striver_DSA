class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(), position.end());

        int low = 1, high = position[n -1] - position[0];

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(canplace(position, mid, m) == true)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return high;
    }

    bool canplace(vector<int>& arr, int mid, int m)
    {
        int cnt = 1, last = arr[0];
        int n = arr.size();

        for(int i=0; i<n; i++)
        {
            if(arr[i] - last >= mid)
            {
                last = arr[i];
                cnt++;
            }

            if(cnt >= m) return true;
        }

        return false;
    }
};