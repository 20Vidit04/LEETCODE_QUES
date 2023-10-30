class Solution {
public:
   int firstOccrance(vector<int>& arr,int s,int e,int k){
    int ans=1;
if(s>e || arr[e]<k){
    return -1;
}
int mid=s+(e-s)/2;
if(arr[mid]==k){
	int p=firstOccrance(arr,s,mid-1,k);
    if(p<mid && p!=-1)
        return p;
    else
        return mid;
}

if(arr[mid]<k){
    return firstOccrance(arr,mid+1,e,k);
}
else{
    return firstOccrance(arr,s,mid-1,k);
}
return ans;
}
int lastOccrance(vector<int>& arr,int s,int e,int k){
     int ans=1;
if(s>e || arr[e]<k){
    return -1;
}
int mid=s+(e-s)/2;
if(arr[mid]==k){
	int p=lastOccrance(arr,mid+1,e,k);
    if(p>mid && p!=-1)
        return p;
    else
        return mid;
}

if(arr[mid]<k){
    return lastOccrance(arr,mid+1,e,k);
}
else{
    return lastOccrance(arr,s,mid-1,k);
}
return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> soln(2,-1);
        int n=nums.size()-1;
        soln[0]=firstOccrance(nums,0,n,target);
        soln[1]=lastOccrance(nums,0,n,target);
        
        
        
        return soln;
    }
};