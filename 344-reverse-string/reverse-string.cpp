class Solution {
public:
    void reverseString(vector<char>& s) {
        int i;
        int index=0;
        for(i=s.size()-1;i>=0;i--){
            int temp=s[index];
            s[index]=s[i];
            s[i]=temp;
            index++;
            if(index>=i){
                break;
            }
        }
        for(i=0;i<s.size();i++){
            cout<<s[i];
        }
    }
};