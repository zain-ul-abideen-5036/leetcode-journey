class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string tempStr = {};

        for (int i = {0}; i < strs[0].size(); ++i){
            for ( int j = {1}; j < strs.size(); ++j){
                if ( i >= strs[j].size() ){
                    return tempStr;
                }
                else if ( strs[j][i] != strs[0][i] ){
                    return tempStr;
                }
            }
            tempStr += strs[0][i];
        }
        return tempStr;
    }
};
