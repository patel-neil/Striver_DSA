class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();

        int l = 0, r = 1;

        unordered_set<int> s1;
        s1.insert(nums[l]);

        while(r < n)
        {
            if(abs(l - r) <= k)
            {
                if(s1.contains(nums[r]))
                {
                    return true;
                }
                s1.insert(nums[r]);
                r++;
            }
            else
            {
                s1.erase(nums[l]);
                l++;
            }
        }

        return false;
    }
};