class Solution {
public:
    vector<int> FindNSE(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse(n, 0);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            nse[i] = st.empty() ? n : st.top();

            st.push(i);
        }

        return nse;
    }

    vector<int> FindPSE(vector<int>& arr) {
        int n = arr.size();
        vector<int> pse(n, 0);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }

            pse[i] = st.empty() ? -1 : st.top();

            st.push(i);
        }

        return pse;
    }
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();

        vector<int> nse = FindNSE(arr);
        vector<int> pse = FindPSE(arr);

        int total = 0;
        int mod = (int)(1e9 + 7);

        for (int i = 0; i < n; i++) {
            long long left = i - pse[i];
            long long right = nse[i] - i;

            total = (total + (right * left * 1LL * arr[i]) % mod) % mod;
        }

        return total;
    }
};