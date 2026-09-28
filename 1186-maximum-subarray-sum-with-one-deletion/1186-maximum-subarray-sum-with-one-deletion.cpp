class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int noDelete = arr[0];
        int oneDelete = INT_MIN / 2;
        int answer = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            int x = arr[i];

            int newOneDelete = max(oneDelete + x, noDelete);
            int newNoDelete = max(x, noDelete + x);

            oneDelete = newOneDelete;
            noDelete = newNoDelete;

            answer = max(answer, max(noDelete, oneDelete));
        }

        return answer;
    }
};