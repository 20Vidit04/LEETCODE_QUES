class Solution {
public:
    bool isPalindrome(string s) {
//          string ans;
//      for(int i=0;i<s.size();i++){
//          char ch=s[i];
//          if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
//              if (ch >= 'a' && ch <= 'z') {
//                 ans += ch;
//             } else if (ch >= 'A' && ch <= 'Z') {
//                 ans += ch - 'A' + 'a';
//             } else {
//                 ans += ch; // Add digits as they are (no conversion needed)
//             }
//          }
//      }

//      int i=0;
//      int j=ans.size()-1;
//      while(i<j){
//          if(ans[i]!=ans[j]){
//              return false;
//          } 
//          else {
//            i++;
//            j--;
//          }
//      }
//      return true;
        
        string ans="";
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if((ch>='A'&&ch<='Z')||(ch>='a' && ch<='z')||(ch>='0'&&ch<='9')){
                if(ch>='a'&&ch<='z'){
                    ans+=ch;
                }
                else if(ch>='A'&&ch<='Z'){
                    ans+=ch-'A'+'a';
                }
                else{
                    ans+=ch;
                }
            }
        }
        int i=0;
        int j=ans.size()-1;
        while(i<j){
            if(ans[i]!=ans[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};