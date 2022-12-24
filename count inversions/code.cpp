class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long arr[], long long temp[], long long int start, long long int start_of_second_part, long long int end)
    {
        long long int inv_count = 0;
        
        int i, j, k;
        
        i = start;
        j = start_of_second_part;
        k = start;
        
        while(i <= start_of_second_part-1 && j <= end)
        {
            if(arr[i] <= arr[j])
            {
                temp[k++] = arr[i++]; 
            }
            else
            {
                temp[k++] = arr[j++];
                inv_count += (start_of_second_part - i);
            }
        }
        
        while(i <= start_of_second_part-1)
        {
            temp[k++] = arr[i++];
        }
        
        while(j <= end)
        {
            temp[k++] = arr[j++];
        }
        
        for(i = start; i <= end; i++)
        {
            arr[i] = temp[i];
        }
        
        return inv_count;
    }
    
    long long int mergeSort(long long arr[], long long temp[], long long int start, long long int end)
    {
        long long int inv_count = 0;
        int mid;
        
        if(end > start)
        {
            mid = start + (end - start)/2;
            
            //left call
            inv_count += mergeSort(arr, temp, start, mid);
            //right call
            inv_count += mergeSort(arr, temp, mid+1, end);
            //merge
            inv_count += merge(arr, temp, start, mid+1, end);
        }
        
        return inv_count;
    }
    long long int inversionCount(long long arr[], long long N)
    {   
        long long int temp[N];
        long long int inversions = mergeSort(arr, temp, 0, N-1);
        return inversions;
    }

};


/*
we will take help of merge sort

*/
