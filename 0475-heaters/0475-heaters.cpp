class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int n = houses.size();
        int m = heaters.size();
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        int Radius = 0;
        Radius = calculateRadius(houses,heaters);
        return Radius;
    }

    int calculateRadius(vector<int>& houses, vector<int>& heaters)
    {
        int n = houses.size();
        int m = heaters.size();
        vector<int> mini(n, INT_MAX);
        int maxRadius = 0;

        for(int i=0; i<n; i++)
        {
            int idx = m;
            int low = 0, high = m - 1;
            int mini = INT_MAX;

            while(low <= high)
            {
                int mid = low + (high - low) / 2;

                if(heaters[mid] >= houses[i])
                {
                    idx = mid;
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }

            int dist;

            if(idx == 0)
            {
                dist = abs(houses[i] - heaters[0]);
            }
            else if(idx == m)
            {
                dist = abs(houses[i] - heaters[m - 1]);
            }
            else
            {
                dist = min(abs(houses[i] - heaters[idx]), abs(houses[i] - heaters[idx - 1]));
            }

            maxRadius = max(maxRadius, dist);
        }
        return maxRadius;
    }
};