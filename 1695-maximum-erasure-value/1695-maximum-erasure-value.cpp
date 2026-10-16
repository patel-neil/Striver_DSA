class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        int l=0, r=0;
        int sum = 0, maxSum = 0;

        unordered_map<int,int> mp;

        while(r < n)
        {
            mp[nums[r]]++;
            sum += nums[r];

            while(mp[nums[r]] > 1)
            {
                mp[nums[l]]--;
                if(mp[nums[l]] == 0) mp.erase(nums[l]);
                sum -= nums[l];
                l++;
            }

            if(sum > maxSum)
            {
                maxSum = sum;
            }

            r++;
        }

        return maxSum;
    }
};