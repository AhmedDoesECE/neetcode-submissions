class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for (auto i : nums) {
            auto p = s.insert(i);
            if (!p.second) return true;
        }
        return false;
    }
};