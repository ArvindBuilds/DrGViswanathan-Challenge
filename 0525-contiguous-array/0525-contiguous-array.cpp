class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        unordered_map<int, int> firstIndex;

        // Prefix sum 0 exists before the array starts
        firstIndex[0] = -1;

        int prefixSum = 0;
        int maxLength = 0;

        for (int i = 0; i < nums.size(); i++) {

            // Treat 0 as -1 and 1 as +1
            if (nums[i] == 0)
                prefixSum--;
            else
                prefixSum++;

            // Same prefix sum seen before
            if (firstIndex.find(prefixSum) != firstIndex.end()) {

                int length = i - firstIndex[prefixSum];

                maxLength = max(maxLength, length);
            }
            else {
                // Store only the first occurrence
                firstIndex[prefixSum] = i;
            }
        }

        return maxLength;
    }
};