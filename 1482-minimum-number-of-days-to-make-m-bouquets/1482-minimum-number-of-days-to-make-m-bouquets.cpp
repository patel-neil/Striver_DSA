class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long val = (long long) m * (long long) k;

        if(val > n)
        {
            return -1;
        }
        int mini = INT_MAX;
        int maxi = INT_MIN;

        for(int i=0; i<n; i++)
        {
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }

        int low = mini, high = maxi;

        while(low <=high)
        {
            int mid = low + (high - low) / 2;

            if(possible(bloomDay, mid, m, k))
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return low;
    }

    bool possible(vector<int> arr, int day, int m, int k)
    {
        int cnt = 0;
        int noofB = 0;

        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i] <= day)
            {
                cnt++;
            }
            else
            {
                noofB += cnt / k;
                cnt = 0;
            }
        }
        noofB += cnt / k;

        return noofB >= m;
    }
};