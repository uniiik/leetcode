class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int curr_product=1;
        int result=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            curr_product*=nums[i];
            result=max(result,curr_product);
            if(curr_product==0)
            {
                curr_product=1;
            }
        }
        
        curr_product=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            curr_product*=nums[i];
            result=max(result,curr_product);
            if(curr_product==0)
            {
                curr_product=1;
            }
            
        }
        return result;
    }
};
/*
we are traversing from both sides to get a max subarray for product
*/