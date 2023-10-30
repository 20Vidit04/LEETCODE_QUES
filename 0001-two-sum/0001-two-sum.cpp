class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                  ans.push_back(i);
                  ans.push_back(j);
                  break;
                }
            }
        }
        return ans;
    }
    
};
 // vector<int> ans;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //           ans.push_back(i);
        //           ans.push_back(j);
        //           break;
        //         }
        //     }
        // }
        // return ans;
//    int n=nums.size();
       
//         unordered_map<int,int> map;
//         vector <int> ans;
//         for(int i=0;i<n;i++){
//             int complement=target-nums[i];

//             if(map.find(complement)!=map.end() && map[complement]>0){
//                  ans.push_back(i);                
//                  ans.push_back(map[complement]);  
//            break;
//         }

//         map[nums[i]] =i; 
//    }
//    return ans;  