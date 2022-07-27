class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=nums.size()-1;
        while(i>=0)
        {nums[i]=nums[i]*nums[i];
            i--;
        }
        
        vector<int> solution(nums.size(),0);
        int left=0;
        int right=nums.size()-1;
        for(int j=nums.size()-1;j>=0;j--)
        {
            if(nums[left]>nums[right])
            {
                solution[j]=nums[left];
                left++;
            }
            else
            {
                solution[j]=nums[right];
                right--;
            }
        }
        
        
        return solution;
        
    }
};