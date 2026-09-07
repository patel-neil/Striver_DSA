class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        int l =0, r=0, maxLen = 0;
        int k = 2;
        unordered_map<int,int> mp;
        while(r < fruits.size())
        {
            mp[fruits[r]]++;

            if(mp.size() > k)
            {
                mp[fruits[l]]--;
                if(mp[fruits[l]] == 0)
                {
                    mp.erase(fruits[l]);
                }
                l++;
            }
            if(mp.size() <= k)
            {
                maxLen = max(maxLen, r - l + 1);
            }
            r++;
        }

        return maxLen;
    }
};