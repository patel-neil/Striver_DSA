class Solution {
public:
    long long rob(vector<int>& nums, vector<int>& colors) {
        int n = nums.size();
        vector<long long> dp(n, 0);

        for(int i=0; i<n; i++)
        {
            dp[i] = nums[i];
        }

        for(int i=1; i<n; i++)
        {
            long long take = 0;

            if(colors[i] != colors[i-1])
            {
                take = nums[i] + dp[i-1];
            }
            else
            {
                if(i > 1)
                { 
                    take = nums[i] + dp[i-2];
                }
                else
                {
                    take = nums[i];
                }
            }

            long long not_take = dp[i-1];

            dp[i] = max(take, not_take);
        }

        return dp[n-1];
    }
};