class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int low = 0, high = n - 1;
        int cnt = 0;

        while(low < high)
        {
            int sum = nums[low] + nums[high];

            if(sum >= target)
            {
                high--;
            }
            else if(sum < target)
            {
                cnt += (high - low);
                low++;
            }
        }

        return cnt;
    }
};