class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26, 0);
        if (s.size() != t.size()) return false;

        for (char c : s) {
            int index = c - 'a';
            freq[index]++;
        }
        for (char c : t) {
            int index = c - 'a';
            freq[index]--;
        }

        for (int i : freq) {
            if (i != 0) return false;
        }

        return true;
    }
};
