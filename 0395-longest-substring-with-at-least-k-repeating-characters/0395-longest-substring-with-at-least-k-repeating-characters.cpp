class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.length();

        if(n < k) return 0;

        unordered_map<int,int> hashArr;
        for(int i=0; i<n; i++)
        {
            hashArr[s[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            if(hashArr[s[i]] < k)
            {
                string left = s.substr(0,i);
                string right = s.substr(i+1,n);

                int a = longestSubstring(left, k);
                int b = longestSubstring(right, k);

                return max(a,b);
            }
        }

        return n;
    }
};