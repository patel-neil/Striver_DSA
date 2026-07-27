class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        sort(aliceSizes.begin(), aliceSizes.end());
        sort(bobSizes.begin(), bobSizes.end());

        int n = aliceSizes.size();
        int m = bobSizes.size();
        int aliceSum = 0, bobSum = 0;

        for(int i=0; i<n; i++)
        {
            aliceSum += aliceSizes[i];
        }
        for(int i=0; i<m; i++)
        {
            bobSum += bobSizes[i];
        }

        int diff = abs(bobSum - aliceSum) / 2;
        vector<int> ans;

        int i=0, j=0;

        while(i < n && j < m)
        {
            if(aliceSum < bobSum)
            {
                if((bobSizes[j] - aliceSizes[i]) == diff)
                {
                    ans.push_back(aliceSizes[i]);
                    ans.push_back(bobSizes[j]);
                    return ans;
                }
                else if((bobSizes[j] - aliceSizes[i]) < diff)
                {
                    j++;
                }
                else
                {
                    i++;
                }
            }
            else
            {
                if((aliceSizes[i] - bobSizes[j]) == diff)
                {
                    ans.push_back(aliceSizes[i]);
                    ans.push_back(bobSizes[j]);
                    return ans;
                }
                else if((aliceSizes[i] - bobSizes[j]) < diff)
                {
                    i++;
                }
                else
                {
                    j++;
                }
            }
        }

        return {-1,-1};
    }
};