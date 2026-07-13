class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        
        if(n < k) return -1;
        // code here
        long long high = 0;
        long long low = 0;
        for(int i=0; i<n; i++)
        {
            high += nums[i];
            low = max(low, (long long)nums[i]);
        }
        
        
        while(low <= high)
        {
            long long mid = low + (high - low) / 2;
            
            int cnt = func(nums, mid);
            
            if(cnt > k)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        
        return low;
    }

    int func(vector<int>& arr, long long pages)
    {
        long long students = 1, pages_student = 0;
        
        for(int i=0 ; i<arr.size(); i++)
        {
            if(pages_student + arr[i] <= pages)
            {
                pages_student += arr[i];
            }
            else
            {
                students++;
                pages_student = arr[i];
            }
        }
        
        return students;
    }
};