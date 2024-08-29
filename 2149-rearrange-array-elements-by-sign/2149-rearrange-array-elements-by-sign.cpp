class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr1;
        vector<int> arr2;
        vector<int> ans(n);
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
        }
   // nums.delete[];
      //  int k = n/2;
    for(int i=0;i<n/2;i++){
          ans[2 * i] = arr1[i];      // Positive number at even index
            ans[2 * i + 1] = arr2[i];
    }
        return ans;
    }
};