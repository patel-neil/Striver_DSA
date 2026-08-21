class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int XORR = 0, i =0;

        while(i < n)
        {
            if(i + 1 < n)
            {
                if(nums[i] == nums[i+1])
                {
                    XORR = XORR ^ nums[i];
                    i = i + 2;
                }
                else
                {
                    i++;
                }
            }
            else
            {
                i++;
            }
        }

        return XORR;
    }
};