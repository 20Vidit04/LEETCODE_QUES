class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0;
        int e=s.length()-1;
        while(i<=e){
            if(isalpha(s[i]) && isalpha(s[e])){
                swap(s[i],s[e]);
                i++;
                e--;
            }
            else if(!isalpha(s[i])){
                i++;
            }
            else{
                e--;
            }
        }
        return s;
    }
};