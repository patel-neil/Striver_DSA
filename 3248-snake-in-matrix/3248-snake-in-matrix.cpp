class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int len = commands.size();
        int ans = 0;
        for(int i=0; i<len; i++)
        {
            if(commands[i] == "RIGHT")
            {
                ans += 1;
            }
            else if(commands[i] == "LEFT")
            {
                ans -= 1;
            }
            else if(commands[i] == "UP")
            {
                ans -= n;
            }
            else
            {
                ans += n;
            }
        }

        return ans;
    }
};