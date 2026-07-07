class Solution {
public:
    long long sumAndMultiply(int n) {
        long long num = n;
        long long rev_num = 0;

        if(n == 0) return 0;

        while(num > 0)
        {
            if(num % 10 != 0)
            {
                rev_num = rev_num*10 + num%10;
            }
            num = num/10;
        }

        num = 0;
        int sum = 0;

        while(rev_num > 0)
        {
            sum += rev_num % 10;
            num = num*10 + rev_num%10;
            rev_num = rev_num/10;
        }

        return num * sum;
    }
};