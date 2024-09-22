class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[256]={0};
        for(int i=0;i<=s.length()-1;i++){
            freq[s[i]]++;
        }
        for(int i=0;i<=t.length()-1;i++){
          freq[t[i]]--;
        }
        
        for(int i=0;i<256;i++){
            if(freq[i]!=0)
                return false;
        }
        return true;
    }
};