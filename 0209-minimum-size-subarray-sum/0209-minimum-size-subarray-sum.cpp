//sliding window problem


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       
        int l=0;
        int r=0;
        int n=nums.size();
        int sum=0;
        int result=INT_MAX;
       while (r < n)
        {
            sum+=nums[r];
            if(sum<target)
                r++;
            if(sum>=target)
            {
                while(sum>=target)
                {
                    result=min(result,r-l+1);
                    sum-=nums[l];
                    l++;
                }
                r++;
                
                
            }
           
        }
        if(result==INT_MAX)//when sum of all numbers in array is still less than the target then result will be display INT_MAX only so we will return 0
            return 0;
        else
            return result;
        
    }
};