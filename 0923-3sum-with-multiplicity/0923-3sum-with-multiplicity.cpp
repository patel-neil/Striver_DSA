class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int ans = 0;
        const int MOD = 1e9 + 7;

        int i =0, k = n - 1;

        for(int i=0; i<n; i++)
        {
            int j = i + 1;
            int k = n - 1;

            while(j < k)
            {
                int sum = arr[i] + arr[j] + arr[k];

                if(sum > target)
                {
                    k--;
                }
                else if(sum < target)
                {
                    j++;
                }
                else
                {
                    if(arr[j] == arr[k])
                    {
                        int count = k - j + 1;

                        ans += count * (count - 1) / 2;
                        ans = ans % MOD;
                        break;
                    }
                    else
                    {
                        int j_count = 1, k_count = 1;

                        while(j + 1 < k && arr[j] == arr[j + 1])
                        {
                            j_count++;
                            j++;
                        }

                        while(k > j + 1 && arr[k] == arr[k - 1])
                        {
                            k_count++;
                            k--;
                        }

                        ans += j_count * k_count;
                        ans %= MOD;

                        j++;
                        k--;
                    }
                }
            }
        }

        return ans;
    }
};