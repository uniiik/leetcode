class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        // for(int i=0;i<nums.size();i++)
        // {
        //     nums[i]=nums[i]*nums[i];
        // }
        
//         int p=0;
//         int k=nums.size()-1;
//        vector <int> solution(nums.size(),0);
//         for(int i=nums.size()-1;i>0;i--)
//         {
//             if(nums[p]<nums[k])
//             {
//                 solution[i]=nums[k];
//                 k--;
//             }
//             else
//             {
//                 solution[i]=nums[p];
//                 p++;
//             }
//         }
        
//         return solution;
        vector<int> sol;
        
        for(int i=0;i<nums.size();i++){
            int suq = nums[i]*nums[i];
            sol.push_back(suq);
        }
        sort(sol.begin(),sol.end());
        
        return sol;
        //return nums;
    }
};