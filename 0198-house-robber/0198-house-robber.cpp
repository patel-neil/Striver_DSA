class Solution {
public:
    int rob(vector<int>& nums) {
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