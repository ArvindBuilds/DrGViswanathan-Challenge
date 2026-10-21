class Solution {
public:
    string removeDuplicates(string s, int k) {
        // Each pair stores {character, consecutive count}
        vector<pair<char, int>> st;

        for (char c : s) {
            if (!st.empty() && st.back().first == c) {
                st.back().second++;
            } else {
                st.push_back({c, 1});
            }

            // Remove k consecutive identical characters
            if (st.back().second == k) {
                st.pop_back();
            }
        }

        string result;

        for (auto& p : st) {
            result.append(p.second, p.first);
        }

        return result;
    }
};