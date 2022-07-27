class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      
            /*  stack<int>array  ;
        array.push(nums[0]);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=array.top())
            {array.push(nums[i]);}
        }
        return array.size();*/
        
        int j=1;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                nums[j]=nums[i+1];
                j++;
            }
        }
        return j;
    }
};