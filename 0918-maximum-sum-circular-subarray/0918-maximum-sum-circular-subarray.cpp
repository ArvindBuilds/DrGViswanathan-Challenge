class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

        int totalSum = 0;

        int currentMax = 0;
        int maxSum = nums[0];

        int currentMin = 0;
        int minSum = nums[0];

        for (int x : nums) {

            // Maximum subarray (Kadane)
            currentMax = max(x, currentMax + x);
            maxSum = max(maxSum, currentMax);

            // Minimum subarray
            currentMin = min(x, currentMin + x);
            minSum = min(minSum, currentMin);

            totalSum += x;
        }

        // All elements are negative
        if (maxSum < 0)
            return maxSum;

        int circularSum = totalSum - minSum;

        return max(maxSum, circularSum);
    }
};