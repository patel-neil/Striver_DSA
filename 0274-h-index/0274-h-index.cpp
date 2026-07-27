class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int low = 1;
        int high = 0;

        for(int i=0; i<n; i++)
        {
            high = max(high, citations[i]);
        }

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(possible(citations,mid))
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

    bool possible(vector<int>& citations,int mid)
    {
        int cnt = 0;
        for(int i=0; i<citations.size(); i++)
        {
            if(citations[i] >= mid)
            {
                cnt++;
            }
        }

        return cnt >= mid;
    }
};