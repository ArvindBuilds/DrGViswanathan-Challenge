class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {

        int n = nums.size();

        int left = -1;
        int right = -1;

        int maxVal = INT_MIN;

        // Find right boundary
        for (int i = 0; i < n; i++) {

            if (nums[i] < maxVal) {
                right = i;
            }

            maxVal = max(maxVal, nums[i]);
        }

        int minVal = INT_MAX;

        // Find left boundary
        for (int i = n - 1; i >= 0; i--) {

            if (nums[i] > minVal) {
                left = i;
            }

            minVal = min(minVal, nums[i]);
        }

        if (left == -1)
            return 0;

        return right - left + 1;
    }
};