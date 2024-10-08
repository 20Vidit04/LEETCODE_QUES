class Solution {
public:
    int findMinDifference(vector<string>& timepoints) {
      vector<int> minutes;
        for(int i=0;i<timepoints.size();i++){
            string curr=timepoints[i];
            int hours=stoi(curr.substr(0,2));
            int minu=stoi(curr.substr(3,2));
            
            int totalminutes=hours*60+minu;
            minutes.push_back(totalminutes);
        }
        sort(minutes.begin(),minutes.end());
        int n=minutes.size();
        int mini=INT_MAX;
        for(int i=0;i<n-1;i++){
            int diff=minutes[i+1]-minutes[i];
             mini=min(mini,diff);
        }
        int lstdiff=(minutes[0]+1440)-minutes[n-1];
        mini=min(mini,lstdiff);
        return mini;
        
    }
};