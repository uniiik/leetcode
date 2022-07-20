class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int count=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                count=i;
            }
            else
            {
                if(nums[i]<target)
                {count=i+1;}
            }
        }
        return count;
        
    }
};