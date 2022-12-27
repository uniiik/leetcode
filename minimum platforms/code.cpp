class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int i=0;
    	int j=0;
    	int count=0;
    	int result=0;
    	
    	while(i<n)
    	{
    	    if(arr[i]<=dep[j])
    	       { count++;
    	           result=max(result,count);
    	           i++;
    	       }
    	       
    	       
    	     else if(arr[i]>dep[j])
    	            {   count--;
    	                result=max(result,count);
    	                j++;
    	            }
    	    
    	    
    	    
    	}
    	return result;
    	
    }
};


/*

here we are doing this problem by taking 2 pointers i and j which are pointing in the two arrays arrival and departure
..first we will sort both the arrays.....now, we only check the arrival and departure times as if the arriavl time of next train
is less than the departure of present train then we will require an new platform otherwise not

lets assume a new train is coming then we will increase the count variable by +1 and if trai is leaving then we will decrease count variable by -1
so by just increasing and decresing we will get our answer
and we will also keep count of max_variable which will tell us how many trains were there at a time
*/
