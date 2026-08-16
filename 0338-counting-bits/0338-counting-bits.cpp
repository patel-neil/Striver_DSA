class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1, 0);
        for(int i = 0; i<=n; i++)
        {
            int cnt = 0;
            int work = i;
            while(work != 0)
            {
                work = work & (work - 1);
                cnt++;
            }

            ans[i] = cnt;
        }

        return ans;
    }
};