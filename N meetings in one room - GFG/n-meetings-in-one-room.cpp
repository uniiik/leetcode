//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
  
    
    
    
    static bool comp(pair<int,int> a,pair<int,int> b)
    {
        if(a.second==b.second)
            return a.first<b.first;
            
            
        return a.second<b.second;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++)
        {
            v[i]={start[i],end[i]};
        }
        sort(v.begin(),v.end(),comp);
        
        
        
        
        int count=1;
        int i=0;
        int j=1;
        while(j<n)
        {
            if(v[j].first>v[i].second)
            {
                count++;
                i=j;// we have made i equal to j bz there might be some case where we are no taking an interval then at that time if are increasing i by 1 it will be wrong so we are increasing i equal to j
                j++;
            }
            else
            {
                j++;
            }
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends