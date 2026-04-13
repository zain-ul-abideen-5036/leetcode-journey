class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int minimumDistance = {INT_MAX};

        for (int i = {0}; i < nums.size(); i++){
                if (nums[i] == target){
                    minimumDistance = min(minimumDistance, abs(i - start));
                }
        }
        return minimumDistance;
    }
};
