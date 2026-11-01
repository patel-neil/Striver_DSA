class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;
        int sec_last = 1;
        int last = 1;
        
        for(int i=2; i<=n; i++)
        {
            int curr = last + sec_last;
            sec_last = last;
            last = curr;
        }
        
        return last;
    }
};