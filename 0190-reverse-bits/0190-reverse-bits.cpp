class Solution {
public:
    int reverseBits(int n) {
        int ans;
        for(int i=0; i<32; i++)
        {
            int bit = n & 1;
            ans = (ans << 1) | bit;
            n = n >> 1;
        }

        return ans;
    }
};