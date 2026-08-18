class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int carry = 0;

        int i = a.length() - 1;
        int j = b.length() - 1;

        while(i >= 0 && j >= 0)
        {
            int x = a[i] - '0';
            int y = b[j] - '0';
            int sum = x ^ y ^ carry;
            carry = (x & y) | (x & carry) | (y & carry);
            ans += char(sum + '0');
            i--;
            j--;
        }
        while(i >= 0)
        {
            int x = a[i] - '0';
            int sum = x ^ carry;
            carry = x & carry;
            ans += char(sum + '0');
            i--;
        }
        while(j >= 0)
        {
            int y = b[j] - '0';
            int sum = y ^ carry;
            carry = y & carry;
            ans += char(sum + '0');
            j--;
        }

        if(carry == 1)
        {
            ans += char(carry + '0');
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};