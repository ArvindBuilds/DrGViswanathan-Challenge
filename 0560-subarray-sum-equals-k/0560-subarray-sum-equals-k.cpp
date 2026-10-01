class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        // Empty prefix
        freq[0] = 1;

        int prefixSum = 0;
        int count = 0;

        for (int num : nums) {

            prefixSum += num;

            // Check if required prefix exists
            if (freq.find(prefixSum - k) != freq.end()) {
                count += freq[prefixSum - k];
            }

            // Store current prefix sum
            freq[prefixSum]++;
        }

        return count;
    }
};