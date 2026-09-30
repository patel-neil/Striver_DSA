class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n1 = s.length();
        int n2 = p.length();
        vector<int> hash(26,0);

        for(int i=0; i<n2; i++)
        {
            hash[p[i] - 'a']++;
        }

        int l=0, r=0, k = n2;
        vector<int> ans;

        while(r < n1)
        {
            if(hash[s[r] - 'a'] > 0)
            {
                k--;
            }
            hash[s[r] - 'a']--;

            while(r - l + 1 > n2)
            {
                hash[s[l] - 'a']++;

                if(hash[s[l] - 'a'] > 0)
                {
                    k++;
                }
                l++;
            }

            if(k == 0)
            {
                ans.push_back(l);
            }

            r++;
        }

        return ans;
    }
};