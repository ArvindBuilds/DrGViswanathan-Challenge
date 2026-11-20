
import java.util.concurrent.ThreadLocalRandom;

class Solution {
    public int findKthLargest(int[] nums, int k) {
        int target = nums.length - k;

        int left = 0;
        int right = nums.length - 1;

        while (left <= right) {

            // Choose a random pivot
            int randomIndex = ThreadLocalRandom.current()
                    .nextInt(left, right + 1);

            swap(nums, randomIndex, right);

            int pivot = nums[right];
            int p = left;

            // Partition
            for (int i = left; i < right; i++) {
                if (nums[i] < pivot) {
                    swap(nums, i, p);
                    p++;
                }
            }

            swap(nums, p, right);

            if (p == target) {
                return nums[p];
            } else if (p < target) {
                left = p + 1;
            } else {
                right = p - 1;
            }
        }

        return -1;
    }

    private void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}
