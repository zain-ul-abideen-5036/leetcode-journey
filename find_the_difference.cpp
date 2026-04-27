class Solution {
public:
    char findTheDifference(string s, string t) {
        int i = {0};
        char result;

        for (int j = {0}; j < t.size(); j++){
            if (s[i] == t[j]){
                i++;
            }
            else{
                result = t[j];
            }
        }
        return result;
    }
};
