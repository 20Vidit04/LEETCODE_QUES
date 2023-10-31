class Solution {
public:
    vector<int> findArray(vector<int>& prefix) {
        
        int n=prefix.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){

       if(i==0)
           ans[i]=prefix[i];
            else{
                ans[i]=prefix[i]^prefix[i-1];
            }
        }
        return ans;
    }
};