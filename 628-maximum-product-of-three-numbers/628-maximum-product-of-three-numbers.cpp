class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return max(nums[n-1]*nums[n-2]*nums[n-3],nums[0]*nums[1]*nums[n-1]);
    }
};
//as after sorting it might be possible that negative part number are bigger than positive number so we have just simply taken first 2 negative numbers which will become +ve after multiplication and multiplied it with the last number so that it might become max
