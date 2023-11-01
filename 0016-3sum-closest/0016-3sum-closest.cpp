class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       // int ans=0;
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
       long long  int closestSum=INT_MAX;
        for(int i=0;i<n;i++){
           
            int j=i+1;
            int k=n-1;
            while(j<k){
              int sum=nums[i]+nums[j]+nums[k];
             if(target==sum) {  
                 return sum;
             }  
                  if (abs(sum - target) < abs(closestSum - target)) {
                closestSum = sum;
            }
            
                if(target> sum){
                   // ans=sum;
                  j++;
                }
                else{
                  //  ans=sum;
                 k--;
                }
                 
            }
        }
      return closestSum;
    }
};