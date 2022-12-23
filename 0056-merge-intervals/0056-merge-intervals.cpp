class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>> v1;
        if(n==0)
            return v1;
        
        sort(intervals.begin(),intervals.end(),[]                                                 (vector<int>&a,vector<int>&b){return a[0]<b[0];});
        
        
        vector<int> curr=intervals[0];
        
        for(int i=1;i<n;i++)
        {
            if(curr[1]<intervals[i][0])
            {
                v1.push_back(curr);
                curr=intervals[i];
            }
            else
            {
                curr[1]=max(curr[1],intervals[i][1]);
                
            }
            
        }
                                                                                                                                               
      v1.push_back(curr);
       return v1;                                                                                                                                        
                                                                                                                                               
                                                                
        
        
    }
};