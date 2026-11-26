class Solution {
public:
    bool canAliceWin(int n) {
        bool flag = false;
        return canWin(n, 10, flag);
    }

    int canWin(int n , int k, bool flag)
    {
        if(n < 0)
        {
            return !flag;
        }

        flag = !flag;
        
        return canWin(n-k, k-1, flag);
    }
};