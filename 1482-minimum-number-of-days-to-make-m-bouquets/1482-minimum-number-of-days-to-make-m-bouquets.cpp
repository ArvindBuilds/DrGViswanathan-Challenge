
class Solution {
public:
    bool canMake(vector<int>& bloomDay, int days, int m, int k) {
        int bouquets = 0;
        int flowers = 0;

        for (int day : bloomDay) {
            if (day <= days) {
                flowers++;

                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            } else {
                flowers = 0;
            }
        }

        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long required = 1LL * m * k;

        if (required > bloomDay.size()) {
            return -1;
        }

        int left = *min_element(bloomDay.begin(), bloomDay.end());
        int right = *max_element(bloomDay.begin(), bloomDay.end());

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (canMake(bloomDay, mid, m, k)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};
