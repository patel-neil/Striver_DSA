class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int low = 0, high = n - 1;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            int ele = n - mid;

            if(citations[mid] >= ele)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return n - low;
    }
};