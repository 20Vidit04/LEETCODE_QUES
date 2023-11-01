class Solution {
public:
    int sum(vector<int>&nums,int s,int e){
    
        int add=0;
        for(int i=s;i<=e;i++){
            add+=nums[i];
        }
        return add;
    }   
    vector<int> leftRightDifference(vector<int>& nums) {
        
        int i=0;
        
        vector<int> ans;
        while(i<nums.size()){
            int leftsum=sum(nums,0,i-1);
            int rightsum=sum(nums,i+1,nums.size()-1);
            int diff=abs(leftsum-rightsum);
            ans.push_back(diff);
            i++;
        }
        return ans;
    }
};