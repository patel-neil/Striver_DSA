class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return countAtMost(nums, k) - countAtMost(nums, k - 1);
    }

    int countAtMost(vector<int> &nums, int k)
    {
        if(k < 0) return 0;

        int n = nums.size();
        int l =0, r= 0, cnt = 0, total = 0;

        while(r < n)
        {
            if(nums[r] % 2 != 0)
            {
                cnt++;
            }

            while(cnt > k)
            {
                if(nums[l] % 2 == 0)
                {
                    l++;
                    continue;
                }
                cnt -= 1;
                l++;
            }

            total += (r - l + 1);
            r++;
        }

        return total;
    }
};