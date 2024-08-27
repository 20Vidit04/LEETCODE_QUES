class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        
        int m=0;
        int i=0;
        while(i<nums.size()){
            if(nums[i]!=0){
                swap(nums[m],nums[i]);
                m++;
            }
            i++;
        }
        
    }
};