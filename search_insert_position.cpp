/*
===========================================================
Approach 1: Linear Search
-----------------------------------------------------------
Idea:
- Traverse the array from left to right
- Return the first index where nums[i] >= target
- If no such index exists, return nums.size()

Time Complexity: O(n)
- In worst case, we scan the entire array

Space Complexity: O(1)
- No extra space used
===========================================================
*/
int searchInsertLinear(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] >= target) {
            return i;
        }
    }
    return nums.size();
}


/*
===========================================================
Approach 2: Binary Search (Optimal)
-----------------------------------------------------------
Idea:
- Use binary search since array is sorted
- If target is found → return index
- Otherwise, 'left' will be the correct insert position

Time Complexity: O(log n)
- Search space is halved each iteration

Space Complexity: O(1)
- No extra space used
===========================================================
*/
int searchInsertBinary(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        } 
        else if (nums[mid] < target) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }

    return left; // insert position
}
