class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return 1;

        int ans = 0;

        for(int i=0; i<n; i++)
        {
            int avg = 0;
            if(i==0)
            {
                avg += nums[i+1];

                if(nums[i] >= avg)
                {
                    ans++;
                }
            }
            else if(i == (n - 1))
            {
                avg += nums[i - 1];

                if(nums[i] >= avg)
                {
                    ans++;
                }
            }
            else
            {
                avg += nums[i -1] + nums[i + 1];
                avg = (avg + 1)/2;

                if(nums[i] >= avg)
                {
                    ans++;
                }
            }
        }

        return ans;
    }
};