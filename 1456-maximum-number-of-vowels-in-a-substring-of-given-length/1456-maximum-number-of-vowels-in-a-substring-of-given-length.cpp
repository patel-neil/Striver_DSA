class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int l=0, r=k, maxcnt = 0;
        int cnt = 0;

        for(int i=0; i<k; i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                cnt++;
            }
        }

        maxcnt = cnt;

        while(r < n)
        {
            if(s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' || s[r] == 'u')
            {
                cnt++;
            }

            
            if(s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u')
            {
                cnt--;
            }
            l++;

            r++;

            if(cnt > maxcnt)
            {
                maxcnt = cnt;
            }
        }

        return maxcnt;
    }
};