class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int diff=0;
        int result=0;
        if(nums.size()<2)
            return 0;
        else{
        
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            diff=nums[i]-nums[i-1];
            result=max(result,diff);
        }}
        
        return result;
    }
};