class Solution {
public:
      int sums(vector<int>& nums,int s,int e){
        int sum=0;
        for(int i=s;i<=e;i++){
            sum+=nums[i];
        }
        return sum;
    }
    int findMiddleIndex(vector<int>& nums) {
         int i=0;
        while(i<=nums.size()-1){
            int leftsum=sums(nums,0,i-1);
            int rightsum=sums(nums,i+1,nums.size()-1);
            
            if(leftsum==rightsum){ 
                return i;
            }
            i++;
        }
        return -1;
    }
};