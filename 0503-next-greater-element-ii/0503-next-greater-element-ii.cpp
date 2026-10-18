class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans(n, -1);
        stack<int> st; // Stores indices

        for (int i = 2 * n - 1; i >= 0; i--) {
            int idx = i % n;

            // Remove elements that aren't greater
            while (!st.empty() && nums[st.top()] <= nums[idx]) {
                st.pop();
            }

            // Record answer only during the real array pass
            if (i < n && !st.empty()) {
                ans[idx] = nums[st.top()];
            }

            st.push(idx);
        }

        return ans;
    }
};