class Solution {
public:
    int nextIndex(vector<int>& nums, int i) {
        int n = nums.size();

        return ((i + nums[i]) % n + n) % n;
    }

    bool circularArrayLoop(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            if (nums[i] == 0)
                continue;

            bool forward = nums[i] > 0;

            int slow = i;
            int fast = i;

            while (true) {
                // Slow move
                int nextSlow = nextIndex(nums, slow);

                if (nums[nextSlow] == 0 ||
                    (nums[nextSlow] > 0) != forward)
                    break;

                // Fast move - first step
                int nextFast = nextIndex(nums, fast);

                if (nums[nextFast] == 0 ||
                    (nums[nextFast] > 0) != forward)
                    break;

                // Fast move - second step
                nextFast = nextIndex(nums, nextFast);

                if (nums[nextFast] == 0 ||
                    (nums[nextFast] > 0) != forward)
                    break;

                slow = nextSlow;
                fast = nextFast;

                if (slow == fast) {
                    // One-element cycle is invalid
                    if (slow == nextIndex(nums, slow))
                        break;

                    return true;
                }
            }

            // Mark this path as visited
            int current = i;

            while (nums[current] != 0 &&
                   (nums[current] > 0) == forward) {

                int next = nextIndex(nums, current);
                nums[current] = 0;
                current = next;
            }
        }

        return false;
    }
};