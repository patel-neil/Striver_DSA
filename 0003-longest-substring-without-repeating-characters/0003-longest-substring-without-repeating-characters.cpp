class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();

        int l = 0, r = 0, maxLen = 0;

        vector<int> hashArr(256, -1);

        while(r < n)
        {
            if(hashArr[s[r]] != -1)
            {
                if(hashArr[s[r]] >= l)
                {
                    l = hashArr[s[r]] + 1;
                }
            }

            int len = r - l + 1;
            maxLen = max(len, maxLen);
            hashArr[s[r]] = r;
            r++;
        }

        return maxLen;
    }
};