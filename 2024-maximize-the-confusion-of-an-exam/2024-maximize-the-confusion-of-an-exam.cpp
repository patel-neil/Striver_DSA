class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(solve(answerKey, k, 'F'), solve(answerKey, k, 'T'));
    }

    int solve(string answerKey, int k, int ch)
    {
        int n =answerKey.length();
        int maxLen = 0, l = 0, r = 0;
        int zeroes = 0;

        while(r < n)
        {
            if(answerKey[r] == ch)
            {
                zeroes++;
            }

            if(zeroes > k)
            {
                if(answerKey[l] == ch) zeroes--;
                l++;
            }

            if(zeroes <= k)
            {
                int len = r - l + 1;
                maxLen = max(maxLen, len);
            }
            r++;
        }

        return maxLen;
    }
};