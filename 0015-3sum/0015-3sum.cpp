class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      
           vector<vector<int>> ans;
         set<vector<int>>s;
        int target=0;
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        for(int i=0;i<n;i++){
           
            int j=i+1;
            int k=n-1;
            while(j<k){
              int sum=nums[i]+nums[j]+nums[k];
             if(target==sum) {
               s.insert({nums[i],nums[j],nums[k]});
                 j++;
                 k--;
             }  
                else if(target> sum){
                  j++;
                }
                else{
                 k--;
                }
                 
            }
        }
        for(auto i:s){
            ans.push_back(i);
          
        }
      return ans;
}
};