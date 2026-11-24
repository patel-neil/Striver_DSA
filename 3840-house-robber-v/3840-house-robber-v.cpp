class Solution {
public:
    long long rob(vector<int>& nums, vector<int>& colors) {
        int n = nums.size();
        long long prev = nums[0], prev2 = 0;

        for(int i=1; i<n; i++)
        {
            long long take = 0;

            if(colors[i] != colors[i-1])
            {
                take = nums[i] + prev;
            }
            else
            {
                if(i > 1)
                { 
                    take = nums[i] + prev2;
                }
                else
                {
                    take = nums[i];
                }
            }

            long long not_take = prev;

            long long curr = max(take, not_take);

            prev2 = prev;
            prev = curr;
        }

        return prev;
    }
};