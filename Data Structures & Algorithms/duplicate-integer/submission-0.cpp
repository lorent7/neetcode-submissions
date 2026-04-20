class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, bool> checked = {};
        for (auto&& i : nums) {
            if (checked[i]) return true;
            checked[i] = true;
        }
        return false;
    }
};