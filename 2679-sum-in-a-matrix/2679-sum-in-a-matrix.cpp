class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        int sum = 0;

        for(int i=0; i<n; i++)
        {
            sort(nums[i].begin(), nums[i].end(), greater<int>());
        }

        for(int j=0; j<m; j++)
        {
            int maximum = INT_MIN;
            for(int i=0; i<n; i++)
            {
                maximum = max(maximum, nums[i][j]);
            }

            sum+= maximum;
        }

        return sum;
    }
};