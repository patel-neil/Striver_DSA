class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int totalSum = 0;

        for(int i=0; i<n; i++)
        {
            totalSum += nums[i];
        }

        if(x > totalSum)
        {
            return -1;
        }

        int k = totalSum - x;
        int l=0, r=0, maxLen = 0, sum=0;

        if(k == 0)
        {
            return n;
        }

        while(r < n)
        {
            sum += nums[r];

            while(sum > k)
            {
                sum -= nums[l];
                l++;
            }

            if(sum == k)
            {
                int len = r - l + 1;
                if(len > maxLen)
                {
                    maxLen = r - l + 1;
                }
            }
            r++;
        }

        return maxLen == 0 ? -1 : n - maxLen;
    }
};