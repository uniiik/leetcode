//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        list<int> li;
       vector<int>ans;
       int maxi=INT_MIN;
       for(int i=0;i<k;i++)
       {
           li.push_back(arr[i]);
           maxi=max(maxi,arr[i]);
       }
       ans.push_back(maxi);
       for(int i=k;i<n;i++)
       {
               li.push_back(arr[i]);
               int in=li.front();
               li.pop_front();
               if(maxi==in)
               {
               maxi=*max_element(li.begin(), li.end());
               }
               else
               {
                   maxi=max(maxi,arr[i]);
               }
               ans.push_back(maxi);
       }
       return ans;
       
   }

};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends