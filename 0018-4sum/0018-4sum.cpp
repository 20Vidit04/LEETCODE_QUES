class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
         vector<vector<int>>ans;
        set<vector<int>> s;
        int n=nums.size();
        for (int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int k=j+1;
                int l=n-1;
                while(k<l){
                    long long int sum=(long long)nums[i]+ (long long)nums[j]+(long long)nums[k]+
                        (long long)nums[l];
                    if(sum==target){
                        s.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                    }
                    else if(target> sum){
                     
                         k++;
                    }
                    else{
                       l--;
                    }
                }
            }
        }
        for (auto i: s){
    
            ans.push_back(i);
        }
        return ans;
    }
};