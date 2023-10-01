class Solution {
public:
    vector<int> countBits(int n) {
        // Create a vector to store the results.
        vector<int> ans;

        // Create a set to store powers of 2.
        unordered_set<long long int> st;

        // Populate the set with powers of 2 up to 2^17.
        for (long long int i = 1; i <= 17; i++) {
            st.insert(pow(2, i));
        }

        // Handle special cases for n = 0 and n = 1.
        if (n == 0) {
            return {0};
        }
        if (n == 1) {
            return {0, 1};
        }

        // Create a dynamic programming array to store computed results.
        vector<int> dp(100001, -1);

        // Initialize values for n = 0 and n = 1.
        dp[0] = 0;
        dp[1] = 1;
        ans.push_back(0);
        ans.push_back(1);

        // Compute and store the number of set bits for each number from 2 to n.
        for (int i = 2; i <= n; i++) {
            int cnt = 0;
            if (st.find(i) != st.end()) {
                // If i is a power of 2, it has only one set bit.
                ans.push_back(1);
                dp[i] = 1;
            } else if (i & 1) {
                // If i is odd, it has one more set bit than i/2.
                int x = dp[i / 2] + 1;
                dp[i] = x;
                ans.push_back(x);
            } else {
                // If i is even, it has the same number of set bits as i/2.
                int x = dp[i / 2];
                dp[i] = x;
                ans.push_back(x);
            }
        }

        return ans;
    }
};
