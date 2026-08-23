class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        vector<int> ans;
        int n = arr.size();

        if(x < arr[0])
        {
            for(int i = 0; i < k; i++)
            {
                ans.push_back(arr[i]);
            }

            sort(ans.begin(), ans.end());

            return ans;
        }
        else if(x > arr[n - 1])
        {
            for(int i = 0; i < k; i++)
            {
                ans.push_back(arr[n - i - 1]);
            }

            sort(ans.begin(), ans.end());

            return ans;
        }

        int low = 0, high = n - 1;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(arr[mid] >= x)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        int idx = low;

        int i = idx - 1;
        int j = idx;

        while(ans.size() < k)
        {
            if(i >= 0 && j < n)
            {
                if(abs(arr[i] - x) <= abs(arr[j] - x))
                {
                    ans.push_back(arr[i]);
                    i--;
                }
                else
                {
                    ans.push_back(arr[j]);
                    j++;
                }
            }
            else if(i >= 0)
            {
                ans.push_back(arr[i]);
                i--;
            }
            else if(j < n)
            {
                ans.push_back(arr[j]);
                j++;
            }
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};