class Solution {
public:
    int takeCharacters(string s, int k) {
        int n = s.length();
        int l=0, r=0;
        vector<int> frq(3, 0);
        int maxLen = 0;
        vector<int> cnt(3,0);

        for(int i=0; i<n; i++)
        {
            frq[s[i] - 'a']++;
        }

        for(int i=0; i<3; i++)
        {
            if(frq[i] < k)
            {
                return -1;
            }
        }

        while(r < n)
        {
            cnt[s[r] - 'a']++;

            while((cnt[0] > frq[0] - k) || (cnt[1] > frq[1] - k) || (cnt[2] > frq[2] - k))
            {
                cnt[s[l] - 'a']--;
                l++;
            }

            maxLen = max(maxLen, r- l + 1);
            r++;
        }
        return n - maxLen;
    }
};