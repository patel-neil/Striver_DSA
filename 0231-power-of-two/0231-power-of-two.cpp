class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n <= 0) return false;
        double m = log2(n);

        int new1 = (int)m;

        

        if(m == new1)
        {
            return true;
        }
        return false;
    }
};