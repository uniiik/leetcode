class Solution {
public:
    
    void heapify(vector<int>&nums,int n,int i)
    {
        int l=2*i+1;
        int r=2*i+2;
        
        int  smallest=i;
        if(l<n && nums[l]>nums[smallest])
        {
            smallest=l;
        }
        if(r<n && nums[r]>nums[smallest])
        {
            smallest=r;
        }
        
        
        if(smallest!=i)   
        {
            swap(nums[smallest],nums[i]);
            heapify(nums,n,smallest);
        }
    }
    
    
    
    void heapsort(vector<int> &nums,int n)
    {
        buildheap(nums,n);
        for(int i=n-1;i>=0;i--)
        {
            swap(nums[i],nums[0]);
            heapify(nums,i,0);
        }
    }
    
  void buildheap(vector<int>&nums,int n){
        for(int i=(n-2)/2;i>=0;i--){
            heapify(nums,n,i);
        }
    }

    
    
    vector<int> sortArray(vector<int>& nums) {
            heapsort(nums,nums.size());
        return nums;
        
        
    }
};