class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = 0;
        int n = weights.size();
        int sum = 0;

        for(int i=0; i<n; i++)
        {
            maxi = max(maxi, weights[i]);
            sum += weights[i];
        }

        int low = maxi, high = sum;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(funcdays(weights, mid) <= days)
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

    int funcdays(vector<int>& weights, int mid)
    {
        int day = 1, load = 0;

        for(int i=0; i<weights.size(); i++)
        {
            if(load + weights[i] > mid)
            {
                day = day + 1;
                load = weights[i];
            }
            else
            {
                load += weights[i];
            }
        }

        return day;
    }
};