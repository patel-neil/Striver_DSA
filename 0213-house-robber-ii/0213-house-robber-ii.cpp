class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];

        vector<int> temp1, temp2;

        for(int i=0; i<n; i++)
        {
            if(i != 0) temp1.push_back(nums[i]);
            if(i != (n-1)) temp2.push_back(nums[i]);
        }

        return max(rob_old(temp1), rob_old(temp2));
    }

    int rob_old(vector<int>& nums) {
        int n = nums.size();
        int prev = nums[0];
        int prev2 = 0;
        int curr = 0;

        for(int i=1; i<n; i++)
        {
            int take = 0;
            if(i > 1)
            {
                take = nums[i] + prev2;
            }
            else
            {
                take = nums[i];
            }

            int not_take = prev;

            curr = max(take, not_take);
            prev2 = prev;
            prev = curr;
        }

        return prev;
    }
};