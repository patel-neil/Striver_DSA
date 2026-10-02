class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int l=0, r=0;
        int maxLen = 0;
        int zeroes = 0;

        while(r < n)
        {
            if(nums[r] == 0)
            {
                zeroes++;
            }

            if(zeroes > 1)
            {
                if(nums[l] == 0) zeroes--;
                l++;
            }

            if(zeroes <= 1)
            {
                int len = r - l + 1;
                if(len > maxLen)
                {
                    maxLen = len;
                }
            }
            r++;
        }

        return maxLen - 1;
    }
};