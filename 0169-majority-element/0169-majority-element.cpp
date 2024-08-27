class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> ans;
        for(auto it:nums){
            ans[it]++;
        }
        int half=nums.size()/2;
      
        for(auto i:ans){
            if(i.second>half){
                return i.first;
            }
        }
        return 0;
    }
     
};
 