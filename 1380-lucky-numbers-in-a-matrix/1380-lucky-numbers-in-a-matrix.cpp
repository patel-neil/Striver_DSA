class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> minimum(n, INT_MAX);
        vector<int> maximum(m, INT_MIN);

        vector<int> ans;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(matrix[i][j] < minimum[i])
                {
                    minimum[i] = matrix[i][j];
                }
            }
        }

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(matrix[j][i] > maximum[i])
                {
                    maximum[i] = matrix[j][i];
                }
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(matrix[i][j] == minimum[i] && matrix[i][j] == maximum[j])
                {
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};