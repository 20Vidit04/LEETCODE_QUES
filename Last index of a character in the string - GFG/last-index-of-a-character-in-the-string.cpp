//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void solve(string &s,char p,int &ans,int i){
        if(i>=s.size())
        return ;
        
        if(s[i]==p){
            ans=i;
            
        }
         solve(s,p,ans,i+1);
        
    }
    int LastIndex(string s, char p){
        //complete the function here
        int i=0;
        int ans=-1;
       solve(s,p,ans,i);
       return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char p;
        cin >> p;
        Solution ob;
        cout << ob.LastIndex(s, p) << endl;
    }
    return 0;
}


// } Driver Code Ends