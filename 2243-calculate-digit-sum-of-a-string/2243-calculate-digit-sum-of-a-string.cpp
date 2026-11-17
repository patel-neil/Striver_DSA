class Solution {
public:
    string digitSum(string s, int k) {
        int n = s.length();

        if(n <= k)
        {
            return s;
        }

        string newS = "";
        int sum = 0;
        int count = 0;

        int i = 0;
        while(i < n)
        {
            sum += s[i] - '0';
            count++;

            if(count == k)
            {
                newS += to_string(sum);
                sum = 0;
                count = 0;
            }
            i++;
        }

        if(count > 0)
        {
            newS += to_string(sum);
        }

        return digitSum(newS, k);
    }
};