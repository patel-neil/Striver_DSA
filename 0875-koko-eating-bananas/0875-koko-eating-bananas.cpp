class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = maxi(piles);

        while(low <= high)
        {
            int mid = (low + high) / 2;

            long long total = computetime(piles, mid);

            if(total <= h)
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

    int maxi(vector<int> arr)
    {
        int maximum = 0;
        int n = arr.size();

        for(int i=0; i<n;i++)
        {
            maximum = max(maximum, arr[i]);
        }
        return maximum;
    }

    long long computetime(vector<int> arr, int mid)
    {
        long long total = 0;
        int n = arr.size();

        for(int i=0; i<n; i++)
        {
            total += ceil((double)arr[i]/ (double)mid);
        }

        return total;
    }
};