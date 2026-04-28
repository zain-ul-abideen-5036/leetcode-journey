class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int i = 0; i < nums.size(); i++) {
            int current = nums[i];

            if (seen.find(current) != seen.end()) {
                return true;  // duplicate found
            }
            seen.insert(current); // store number
        }
        return false;
    }
};
