class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        vector<int> hash(26,0);

        for(int i=0; i<n1; i++)
        {
            hash[s1[i] - 'a']++;
        }

        int l=0, r=0, k = n1;

        while(r < n2)
        {
            if(hash[s2[r] - 'a'] > 0)
            {
                k--;
            }
            hash[s2[r] - 'a']--;

            while(r - l + 1 > n1)
            {
                hash[s2[l] - 'a']++;

                if(hash[s2[l] - 'a'] > 0)
                {
                    k++;
                }
                l++;
            }

            if(k == 0) return true;

            r++;
        }

        return false;
    }
};