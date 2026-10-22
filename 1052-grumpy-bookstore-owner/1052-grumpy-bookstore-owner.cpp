class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int satisfied = 0;

        for(int i = 0; i < n; i++)
        {
            if(grumpy[i] == 0)
            {
                satisfied += customers[i];
            }
        }

        int l = 0, r = 0;
        int sum = 0, maxSum = 0;

        while(r < n)
        {
            if(grumpy[r] == 1)
            {
                sum += customers[r];
            }

            if(r - l + 1 > minutes)
            {
                if(grumpy[l] == 1)
                {
                    sum -= customers[l];
                }

                l++;
            }

            if(r - l + 1 == minutes)
            {
                maxSum = max(maxSum, sum);
            }

            r++;
        }

        return satisfied + maxSum;
    }
};