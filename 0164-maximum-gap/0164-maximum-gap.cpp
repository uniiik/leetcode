class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n < 2)
            return 0;
        
        // find maximum and minimum element of the array
        
        int maxi = *max_element(nums.begin(), nums.end());
        
        int mini = *min_element(nums.begin(), nums.end());
        
        // find the gap
        
        int gap = ((maxi - mini) / (n - 1)) + 1;
        
        // min_bucket[i] store the min of that bucket
        
        vector<int> min_bucket(n - 1, INT_MAX);
        
        // max_bucket[i] store the max of that bucket
        
        vector<int> max_bucket(n - 1, INT_MIN);
        
        // fill the min_bucket and max_bucket
        
        for(int i = 0; i < n; i++)
        {
            if(nums[i] != mini && nums[i] != maxi)
            {
                // index of bucket
                
                int buk_idx = (nums[i] - mini) / gap;
                
                min_bucket[buk_idx] = min(min_bucket[buk_idx], nums[i]);
                
                max_bucket[buk_idx] = max(max_bucket[buk_idx], nums[i]);
            }
        }
        
        // now traverse over buckets and find max_gap
        
        int max_gap = INT_MIN;
        
        // prev store max of prev bucket
        
        int prev = mini;
        
        // find max gap
        
        for(int i = 0; i < n - 1; i++)
        {
            // if bucket is not empty
            
            if(min_bucket[i] != INT_MAX && max_bucket[i] != INT_MIN)
            {
                int curr_gap = min_bucket[i] - prev;
                
                max_gap = max(max_gap, curr_gap);
                
                prev = max(prev, max_bucket[i]);
            }
        }
        
        max_gap = max(max_gap, maxi - prev);
        
        return max_gap;
    }
};
/*we have us ebucket sort to do this task*/