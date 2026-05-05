class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();

        for (int i = {0}; i < n; i++) {
            if (arr[i] == 0) {
                // shift elements to right
                for (int j = {n - 1}; j > i; j--) {
                    arr[j] = arr[j - 1];
                }
                // duplicate zero
                i++; // skip next index
            }
        }
    }
};
