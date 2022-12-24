class Solution {
public:
    bool isIdealPermutation(vector<int>& A) {
        for (int i = 0; i < A.size(); i++)
            if (i - A[i] > 1 || i - A[i] < -1) return false;
        return true;
    }
};

/*
we have to just prove that atleast one global is not equal to local inversion
*/
/*
We can observe that each local inversion is global inversion (or local inversions are subset of global inversions). For both of them to be equal, every global inversion must only be a local inversion.
*/



 /* int global_cnt=0;
        int local_cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
           
             if(nums[i]>nums[i])
        }
        
        if(global_cnt== local_cnt)
            return 1;
        else
            return 0;*/