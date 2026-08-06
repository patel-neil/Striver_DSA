class Solution {
public:
    int smallestNumber(int n, int t) {

        for(int i=0; i<10; i++)
        {
            int product = 1;
            int temp = n + i;
            while(temp > 0)
            {
                int rem = temp % 10;
                product *= rem;
                temp = temp / 10;
            }

            if(product % t == 0)
            {
                return n + i;
            }
        }

        return -1;
    }
};