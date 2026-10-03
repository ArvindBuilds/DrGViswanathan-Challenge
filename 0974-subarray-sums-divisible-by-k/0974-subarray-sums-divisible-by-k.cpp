class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        // Remainder 0 initially exists once
        freq[0] = 1;

        int prefixSum = 0;
        int answer = 0;

        for (int num : nums) {

            prefixSum += num;

            int rem = prefixSum % k;

            // Handle negative remainder
            if (rem < 0)
                rem += k;

            // Same remainder => divisible subarray
            if (freq.find(rem) != freq.end()) {
                answer += freq[rem];
            }

            freq[rem]++;
        }

        return answer;
    }
};