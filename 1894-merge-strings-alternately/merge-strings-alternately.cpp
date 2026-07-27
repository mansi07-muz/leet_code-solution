class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result="";
        unsigned int n1=word1.size();
        unsigned int n2=word2.size();
        for(unsigned int i=0;i<n1 || i<n2;i++){
            if(i<n1){
                result.push_back(word1[i]);
            }
            if(i<n2){
                result.push_back(word2[i]);
            }
        }
        return result;
    }
};