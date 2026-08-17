class Solution {
public:
    bool hasAlternatingBits(int n) {
        long long ans = n ^ (n >> 1);

        if((ans & (ans + 1)) == 0)
        {
            return true;
        }
        return false;
    }
};