class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int ans = 0;
        int n = fruits.size();

        vector<int> hashArr(n, 0);

        for(int i=0; i< n; i++)
        {
            bool flag = 0;
            for(int j=0; j<n; j++)
            {
                if(baskets[j] >= fruits[i])
                {
                    if(hashArr[j] == 0)
                    {
                        hashArr[j] = 1;
                        flag = 1;
                        break;
                    }
                }
                else
                {
                    continue;
                }
            }
            if(flag == 0)
            {
                ans++;
            }
        }

        return ans;
    }
};