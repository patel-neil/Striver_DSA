class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int l=0, r=0, maxLen=0;

        while(r < n)
        {
            mp[nums[r]]++;

            while(mp[nums[r]] > k)
            {
                mp[nums[l]]--;
                if(mp[nums[l]] == 0) mp.erase(mp[nums[l]]);
                l++;
            }

            maxLen = max(maxLen, r- l + 1);
            r++;
        }

        return maxLen;
    }
};