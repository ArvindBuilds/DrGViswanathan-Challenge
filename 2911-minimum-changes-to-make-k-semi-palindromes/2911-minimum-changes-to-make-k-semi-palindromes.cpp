
class Solution {
public:
    int minimumChanges(string s, int k) {
        int n = s.size();
        const int INF = 1e9;

        // Step 1: Precompute substring costs
        vector<vector<int>> cost(n, vector<int>(n, INF));

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                int len = j - i + 1;

                // Try every valid divisor
                for (int d = 1; d < len; d++) {
                    if (len % d != 0) continue;

                    int changes = 0;

                    // Compare corresponding characters
                    for (int offset = 0; offset < d; offset++) {
                        int l = i + offset;
                        int r = j - d + 1 + offset;

                        while (l < r) {
                            if (s[l] != s[r]) {
                                changes++;
                            }

                            l += d;
                            r -= d;
                        }
                    }

                    cost[i][j] = min(cost[i][j], changes);
                }
            }
        }

        // Step 2: DP
        // dp[i][j] = minimum changes for first i chars
        // divided into exactly j semi-palindromes

        vector<vector<int>> dp(
            n + 1, vector<int>(k + 1, INF)
        );

        dp[0][0] = 0;

        for (int i = 1; i <= n; i++) {
            for (int parts = 1; parts <= k; parts++) {

                for (int cut = 0; cut < i - 1; cut++) {

                    if (dp[cut][parts - 1] == INF)
                        continue;

                    dp[i][parts] = min(
                        dp[i][parts],
                        dp[cut][parts - 1] + cost[cut][i - 1]
                    );
                }
            }
        }

        return dp[n][k];
    }
};
