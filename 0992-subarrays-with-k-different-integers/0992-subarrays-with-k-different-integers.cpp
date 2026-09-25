class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return CountAtMost(nums, k) - CountAtMost(nums, k - 1);
    }

    int CountAtMost(vector<int>& nums, int k)
    {
        if(k < 0) return 0;
        int n = nums.size();

        int l=0, r=0, cnt=0;
        unordered_map<int, int> mp;

        while(r < n)
        {
            mp[nums[r]]++;

            while(mp.size() > k)
            {
                mp[nums[l]]--;

                if(mp[nums[l]] == 0) mp.erase(nums[l]);
                l++;
            }

            cnt += r - l + 1;
            r++;
        }

        return cnt;
    }
};