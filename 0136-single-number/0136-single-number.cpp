class Solution {
public:
    int singleNumber(vector<int>& nums) {
         unordered_map<int,int> ans;
        for(int i=0;i<nums.size();i++){
		   ans[nums[i]]++;
        }
	   for(auto z:ans)
		   if(z.second==1)
			   return z.first;
	   return -1;
        
    }
};