class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        bool flag = 0;
        int count = 0;

        for(int i= n -1; i>=0; i--)
        {
            if(s[i] == ' ' && flag == 0)
            {
                continue;
            }
            else if(s[i] != ' ')
            {
                flag = 1;
                count++;

                if(i == 0)
                {
                    return count;
                }
            }
            else
            {
                return count;
            }
        }

        return 0;
    }
};