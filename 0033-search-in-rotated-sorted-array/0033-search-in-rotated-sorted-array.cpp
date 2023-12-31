class Solution {
public:
    int getpivot(vector<int> &arr,int n){
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<e){
            
            if(arr[mid]>=arr[0]){
             s=mid+1;
            }
            else{
                e=mid;
            }
         mid=s+(e-s)/2;
        }
        return s;
    }
    int binarySearch(vector<int> &arr,int s,int e,int k){
        int mid=s+(e-s)/2;
        while(s<=e){
            
            if(arr[mid]==k){
                return mid;
            }
            if(k>arr[mid]){
                s=mid+1;
            }
            else{
                e=mid-1 ;
            }
        mid=s+(e-s)/2;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
       int pivot=getpivot(nums,n);
        if(target>=nums[pivot] &&target<=nums[n-1]){
            return binarySearch(nums,pivot,n-1, target);
        }
        else{
            return binarySearch(nums,0,pivot-1,target);
        }
    }
};