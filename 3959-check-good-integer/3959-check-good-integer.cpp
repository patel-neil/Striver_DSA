class Solution {
public:
    bool checkGoodInteger(int n) {
        long long digitSum = 0;
        long long squareSum = 0;
        while(n > 0)
        {
            long long rem = n % 10;
            digitSum += rem;
            squareSum += (rem * rem);
            n = n / 10;
        }

        cout << digitSum<< " " << squareSum;

        return (squareSum - digitSum >= 50);
    }
};