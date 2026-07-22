/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int low = 1, high = n - 2;
        int peak = 0;

        while(low < high)
        {
            int mid = low + (high - low) / 2;

            if(mountainArr.get(mid) > mountainArr.get(mid + 1))
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }

        peak = low;

        low = 0, high = peak;
        int ans = -1;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            int val = mountainArr.get(mid);

            if(val == target)
            {
                ans = mid;
                high = mid - 1;
            }
            else if(val > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        if(ans != -1)
        {
            return ans;
        }

        low = peak, high = n -1;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            int val = mountainArr.get(mid);

            if(val == target)
            {
                ans = mid;
                high = mid - 1;
            }
            else if(val > target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return ans;
    }
};