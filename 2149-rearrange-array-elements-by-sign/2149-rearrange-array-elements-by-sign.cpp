class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> v1;
        vector<int> v2;
    for(int i=0;i<n;i++)
    {
        if(nums[i]>=0)
            v1.push_back(nums[i]);
        else if(nums[i]<0)
            v2.push_back(nums[i]);
        }
        int k=0;
        int p=0;
        
        for(int i=0;i<n;i++)
        {
            if((i%2)!=0)
            {
                nums[i]=v2[k];
                k++;
            }
             if((i%2)==0)
            {
                nums[i]=v1[p];
               p++;
            }
        }
        return nums;
    }
};