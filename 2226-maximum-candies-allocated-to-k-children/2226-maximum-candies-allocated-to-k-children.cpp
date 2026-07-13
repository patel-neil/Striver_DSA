class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int low = 1;
        int high = INT_MIN;
        int n = candies.size();

        for(int i=0; i<n; i++)
        {
            high = max(high, candies[i]);
        }

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            long long cnt = func(candies, mid);

            if(cnt >= k)
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

    long long func(vector<int>& candies, int value)
    {
        long long child = 0;

        for(int i=0; i<candies.size(); i++)
        {
            child += candies[i] / value;
        }

        cout << child << " ";
        return child;
    }
};