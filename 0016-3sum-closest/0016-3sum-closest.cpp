class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int closest = INT_MAX;
        int global_sum = 0;

        for(int i=0; i<n; i++)
        {
            if(i > 0 && nums[i] == nums[i -1]) continue;

            int j = i + 1;
            int k = n - 1;

            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];

                if(abs(sum - target) < closest)
                {
                    closest = abs(sum - target);
                    global_sum = sum;
                }

                if(sum == target)
                {
                    return sum;
                }
                else if(sum > target)
                {
                    k--;
                }
                else
                {
                    j++;
                }
                
            }
        }

        return global_sum;
    }
};