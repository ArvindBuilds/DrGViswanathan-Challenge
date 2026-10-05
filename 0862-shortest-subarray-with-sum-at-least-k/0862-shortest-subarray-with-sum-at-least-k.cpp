class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {

        int n = nums.size();

        vector<long long> prefix(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        deque<int> dq;

        int answer = n + 1;

        for (int i = 0; i <= n; i++) {

            // Check if current subarray sum >= k
            while (!dq.empty() &&
                   prefix[i] - prefix[dq.front()] >= k) {

                answer = min(answer, i - dq.front());
                dq.pop_front();
            }

            // Maintain increasing prefix sums
            while (!dq.empty() &&
                   prefix[i] <= prefix[dq.back()]) {

                dq.pop_back();
            }

            dq.push_back(i);
        }

        return answer == n + 1 ? -1 : answer;
    }
};