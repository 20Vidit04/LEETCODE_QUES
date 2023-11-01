class Solution {
public:
    int reverse(int x) {
        int n=x;
        if(x<INT_MIN|| x>INT_MAX)
            return 0;
        
    long long int rev=0;
        while(n!=0){
        rev=rev*10+n%10;
              n/=10;
             if(rev<INT_MIN || rev>INT_MAX)
            return 0;
            
       
         
        }
        
        return rev;
    }
};