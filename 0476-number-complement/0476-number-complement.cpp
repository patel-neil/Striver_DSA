class Solution {
public:
    int findComplement(int num) {
        
        string bi = "";
        while(num != 0)
        {
            if(num %2 == 1)
            {
                bi += '1';
            }
            else
            {
                bi += '0';
            }
            num = num / 2;
        }

        reverse(bi.begin(), bi.end());

        int n = bi.length();

        for(int i=0; i<n; i++)
        {
            if(bi[i] == '1')
            {
                bi[i] = '0';
            }
            else
            {
                bi[i] = '1';
            }
        }

        long long p2 = 1;
        int ans =0;

        for(int i=n - 1; i >= 0; i--)
        {
            if(bi[i] == '1')
            {
                ans += p2;
            }

            p2 = p2 * 2;
        }

        return ans;
    }
};