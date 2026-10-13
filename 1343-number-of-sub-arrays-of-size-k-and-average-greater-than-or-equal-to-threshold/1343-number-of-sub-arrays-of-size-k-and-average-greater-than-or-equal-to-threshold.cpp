class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int l =0, r=0;
        int cnt = 0;
        int ans = 0;
        int sum = 0, avg = 0;

        while(r < n)
        {
            sum += arr[r];
            avg = sum / (r - l + 1);

            if((r - l + 1) > k)
            {
                sum -= arr[l];
                l++;
                avg = sum / (r - l + 1);
            }

            if((r - l + 1) == k && avg >= threshold)
            {
                ans++;
            }
            r++;
        }

        return ans;
    }
};