class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();

        if(n==1)
            return;
             
             
             
        int idx1;
        int idx2;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx1=i;
                break;
            }
        }
             
             
        if(idx1<0){
            reverse(nums.begin(),nums.end());}
        else
        {
             
        for(int i=n-1;i>=0;i--){
                if(nums[i]>nums[idx1]){
                    idx2=i;
                    break;
                }
            }
        
        /*swap of numbers on idx1 and idx2 position*/
         swap(nums[idx1],nums[idx2]);
            
        sort(nums.begin()+idx1+1,nums.end());}
                 
        
    }
};