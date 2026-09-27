class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.length();

        if(n < 10)
        {
            return {};
        }

        int l=0, r=9;
        unordered_map<string, int> mp;
        vector<string> ans;

        while(r < n)
        {
            string sub = s.substr(l, 10);
            mp[sub]++;

            if(mp[sub] == 2)
            {
                ans.push_back(sub);
            }

            l++;
            r++;
        }

        return ans;
    }
};