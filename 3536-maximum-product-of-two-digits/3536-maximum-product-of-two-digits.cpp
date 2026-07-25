class Solution {
public:
    int maxProduct(int n) {
        vector<int> digits;

        while(n > 0)
        {
            int rem = n % 10;
            digits.push_back(rem);
            n = n / 10;
        }
        
        int N = digits.size();
        int maxi = INT_MIN;

        for(int i=0; i<N; i++)
        {
            for(int j=i+1; j<N; j++)
            {
                int prod = digits[i] * digits[j];
                
                maxi = max(prod, maxi);
            }
        }

        return maxi;
    }
};