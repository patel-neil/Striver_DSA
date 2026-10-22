class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int satisfied = 0;

        int n = customers.size();

        for(int i=0; i<n; i++)
        {
            if(grumpy[i] == 0)
            {
                satisfied += customers[i];
            }
        }

        vector<int> aux(n, 0);

        for(int i=0; i<n; i++)
        {
            if(grumpy[i] == 1)
            {
                aux[i] = customers[i];
            }
        }

        satisfied += max_sum(aux, minutes);

        return satisfied;
    }

    int max_sum(vector<int> &aux, int minutes)
    {
        int n = aux.size();
        int l=0, r=0;
        int maxSum = 0;
        int sum = 0;

        while(r < n)
        {
            sum += aux[r];

            if((r - l + 1) > minutes)
            {
                sum -= aux[l];
                l++;
            }

            if((r - l + 1) == minutes)
            {
                if(sum > maxSum)
                {
                    maxSum = sum;
                }
            }

            r++;
        }

        return maxSum;
    }
};