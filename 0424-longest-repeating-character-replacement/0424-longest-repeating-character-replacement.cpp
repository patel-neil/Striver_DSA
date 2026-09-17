class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int l=0, r=0;
        int maxLen=0, maxFreq=0;
        vector<int> hashArr(26,0);

        while(r < n)
        {
            hashArr[s[r] - 'A']++;

            maxFreq = max(maxFreq, hashArr[s[r] - 'A']);
            int len = r - l + 1;

            if(len - maxFreq > k)
            {
                hashArr[s[l] - 'A']--;
                maxFreq = 0;

                for(int i=0; i<26; i++)
                {
                    maxFreq = max(maxFreq, hashArr[i]);
                }
                l++;
            }

            if(len - maxFreq <= k)
            {
                maxLen = max(maxLen, len);
            }
            r++;
        }

        return maxLen;
    }
};