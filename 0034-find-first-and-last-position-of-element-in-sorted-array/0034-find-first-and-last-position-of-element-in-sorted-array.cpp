class Solution {
public:
     int firstOccrance(vector<int>& nums, int target){
      int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans=mid;
                e=mid-1;
            }
          else  if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
     int lastOccrance(vector<int>& nums, int target){
      int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans=mid;
                s=mid+1;
            }
           else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> soln;
        int ans1=firstOccrance(nums,target);
        int ans2=lastOccrance(nums,target);
        
        soln.push_back(ans1);
        soln.push_back(ans2);
        
        return soln;
    }
};