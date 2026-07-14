class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 0, high = num;

        while(low <= high)
        {
            long long mid = low + (high - low) / 2;

            if(mid * mid > (long long)num)
            {
                high = mid - 1;
            }
            else if(mid * mid < (long long)num)
            {
                low = mid + 1;
            }
            else
            {
                return true;
            }
        }

        return false;
    }
};