
import java.util.*;

class Solution {
    public int[] kWeakestRows(int[][] mat, int k) {

        PriorityQueue<int[]> pq = new PriorityQueue<>(
            (a, b) -> {
                if (a[1] != b[1]) {
                    return a[1] - b[1];
                }
                return a[0] - b[0];
            }
        );

        for (int i = 0; i < mat.length; i++) {
            int left = 0;
            int right = mat[i].length;

            // Count soldiers using binary search
            while (left < right) {
                int mid = left + (right - left) / 2;

                if (mat[i][mid] == 1) {
                    left = mid + 1;
                } else {
                    right = mid;
                }
            }

            pq.offer(new int[]{i, left});
        }

        int[] result = new int[k];

        for (int i = 0; i < k; i++) {
            result[i] = pq.poll()[0];
        }

        return result;
    }
}
