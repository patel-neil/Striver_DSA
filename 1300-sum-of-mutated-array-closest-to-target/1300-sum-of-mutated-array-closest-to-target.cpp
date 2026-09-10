class Solution {
public:
    int findBestValue(vector<int>& arr, int target) {
        int low = 1;
        int high = *max_element(arr.begin(), arr.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int totalSum = checkSoln(arr, mid);

            if (totalSum < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        int sumLow = checkSoln(arr, low);
        int sumHigh = checkSoln(arr, high);

        if (abs(sumLow - target) < abs(sumHigh - target))
            return low;
        else
            return high;
    }

    int checkSoln(vector<int>& arr, int mid) {
        int sum = 0;

        for (int x : arr) {
            sum += min(x, mid);
        }

        return sum;
    }
};