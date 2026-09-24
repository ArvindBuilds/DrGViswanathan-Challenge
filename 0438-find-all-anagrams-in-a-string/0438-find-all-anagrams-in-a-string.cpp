class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        if (s.length() < p.length())
            return ans;

        vector<int> pFreq(26, 0);
        vector<int> windowFreq(26, 0);

        // Frequency of characters in p
        for (char c : p) {
            pFreq[c - 'a']++;
        }

        int k = p.length();

        // First window
        for (int i = 0; i < k; i++) {
            windowFreq[s[i] - 'a']++;
        }

        if (windowFreq == pFreq) {
            ans.push_back(0);
        }

        // Sliding window
        for (int i = k; i < s.length(); i++) {

            // Add new character
            windowFreq[s[i] - 'a']++;

            // Remove character leaving the window
            windowFreq[s[i - k] - 'a']--;

            // Check if current window is an anagram
            if (windowFreq == pFreq) {
                ans.push_back(i - k + 1);
            }
        }

        return ans;
    }
};