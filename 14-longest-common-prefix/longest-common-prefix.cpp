class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        for(size_t i =0;i<strs[0].size();++i){
            char current_char=strs[0][i];
            for(size_t j=1;j<strs.size();++j){
                if(i>=strs[j].size()|| strs[j][i]!=current_char){
                    return strs[0].substr(0,i);
                }
            }
            ;
        }
        return strs[0];
    }
};