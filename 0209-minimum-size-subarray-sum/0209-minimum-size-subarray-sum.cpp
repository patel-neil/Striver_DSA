class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int low = 1, high = n;
        int mn = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (windowfind(mid, nums, target)) {
                high = mid - 1;
                mn = mid;
            } else
                low = mid + 1;
        }
        return mn;
    }

    bool windowfind(int size, vector<int>& nums, int target) {
        int sum = 0;
        int i = 0;
        int j = 0;
        int mx = INT_MIN;
        int n = nums.size();
        while (j < n) {
            sum += nums[j];
            if (j - i + 1 == size) {
                mx = max(sum, mx);
                sum -= nums[i];
                i++;
            }
            j++;
        }
        if (mx >= target)
            return true;
        return false;
    }
}
;