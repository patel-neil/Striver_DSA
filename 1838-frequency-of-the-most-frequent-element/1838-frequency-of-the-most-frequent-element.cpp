class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int l=0, r=0, frq = 0;
        long long winSum = 0;

        while(r < n)
        {
            winSum += nums[r];
            long long cost = 0;

            cost += 1LL * nums[r] * (r - l + 1) - winSum;

            while(cost > k)
            {
                winSum -= nums[l];
                l++;
                cost = 1LL * nums[r] * (r - l + 1) - winSum;
            }

            frq = max((r - l + 1), frq);
            r++;
        }

        return frq;
    }
};