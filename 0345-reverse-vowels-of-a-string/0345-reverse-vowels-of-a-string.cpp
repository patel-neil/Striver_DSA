class Solution {
public:
    string reverseVowels(string s) {
        int n = s.length();
        int l = 0, r = n - 1;

        while(l <= r)
        {
            while(l < r && s[l] != 'A' && s[l] != 'E' && s[l] != 'I' && s[l] != 'O' && s[l] != 'U' && s[l] != 'a' && s[l] != 'e' && s[l] != 'i' && s[l] != 'o' && s[l] != 'u')
            {
                l++;
            }

            while(l < r && s[r] != 'A' && s[r] != 'E' && s[r] != 'I' && s[r] != 'O' && s[r] != 'U' && s[r] != 'a' && s[r] != 'e' && s[r] != 'i' && s[r] != 'o' && s[r] != 'u')
            {
                r--;
            }

            int temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            l++;
            r--;
        }

        return s;
    }
};