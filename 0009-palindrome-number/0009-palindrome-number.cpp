class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<INT_MIN || x>INT_MAX)
            return 0;
        
       long long int rev=0;
        int n=x;
        if(x<0)
            return false;
        while(n!=0){
        rev=rev*10+n%10;
            n/=10;
            
              if(rev<INT_MIN || rev>INT_MAX)
            return 0;
        }
        if(rev==x)
            return true;
         else{
             return false;
         }
    }
    
};