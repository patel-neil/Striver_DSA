class Solution {
public:
    int nthUglyNumber(int n) {

        vector<int> ugly(n);

        ugly[0] = 1;

        int l2 = 0, l3 = 0, l5 = 0;

        if(n == 1) return 1;

        int temp = 0;
        for(int i=1 ;i < n; i++)
        {
            temp = min(2* ugly[l2], min(3 * ugly[l3], 5 * ugly[l5]));

            ugly[i] = temp;

            if(temp == 2* ugly[l2]) l2++;
            if(temp == 3* ugly[l3]) l3++;
            if(temp == 5* ugly[l5]) l5++;
        }

        return ugly[n - 1];
    }
};