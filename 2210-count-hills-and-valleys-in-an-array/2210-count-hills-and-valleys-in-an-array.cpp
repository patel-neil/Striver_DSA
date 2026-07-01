class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        int ans = 0;

        for(int i=1; i<n-1; i++)
        {
            if((nums[i] > nums[i + 1] && nums[i] > nums[j]) 
            || (nums[i] < nums[i + 1] && nums[i] < nums[j]))
            {
                ans++;
            }
            else if(nums[i] == nums[i+1])
            {
                continue;
            }

            j = i;
        }

        return ans;
    }
};