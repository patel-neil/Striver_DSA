class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n = time.size();

        long long high = 1LL * (*min_element(time.begin(), time.end())) * totalTrips;
        long long low = 1;

        while(low <= high)
        {
            long long mid = low + (high - low) / 2;

            if(checkSoln(time, totalTrips, mid))
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

    bool checkSoln(vector<int> &time, int totalTrips, long long mid)
    {
        int n = time.size();
        long long total = 0;
        for(int i=0; i<n; i++)
        {
            total += mid / time[i];
        }

        if(total >= totalTrips)
        {
            return true;
        }

        return false;
    }
};