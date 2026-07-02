class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0]. size();

        int l = 0, r = m - 1;

        while(l <= r)
        {
            int col = (l + r) /2;

            int maxi = 0;
            int index = 0;

            for(int i=0 ;i<n; i++)
            {
                if(mat[i][col] > maxi)
                {
                    maxi = mat[i][col];
                    index = i; 
                }
            }

            int left = (col > 0) ? mat[index][col - 1] : -1;
            int right = (col < m - 1) ? mat[index][col + 1] : -1;

            if(mat[index][col] > left
            && mat[index][col] > right)
            {
                return {index, col};
            }
            else if(left > mat[index][col])
            {
                r = col - 1;
            }
            else
            {
                l = col + 1;
            }
        }

        return {-1,-1};
    }
};