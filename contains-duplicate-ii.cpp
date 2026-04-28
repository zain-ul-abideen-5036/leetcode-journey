class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int distance = {0};
        for (int i = {0}; i < nums.size(); i++){
            for(int j = {i+1}; j < nums.size(); j++){
                if (nums[i] == nums[j]){
                    distance = abs(i - j);
                    if (distance <= k){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
