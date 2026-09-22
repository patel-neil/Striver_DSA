class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return countAtMost(nums, goal) - countAtMost(nums, goal - 1);
    }

    int countAtMost(vector<int> &nums, int goal)
    {
        if(goal < 0) return 0;
        int n = nums.size();
        int l=0, r=0, cnt=0, sum=0;

        while(r < n)
        {
            sum += nums[r];

            while(sum > goal)
            {
                sum = sum - nums[l];
                l++;
            }
            cnt = cnt + (r - l + 1);
            r++;
        }

        return cnt;
    }
};