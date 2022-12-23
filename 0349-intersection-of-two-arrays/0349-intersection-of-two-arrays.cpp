class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       vector<int> v1;
        unordered_set<int> s1;
        for(int i=0;i<nums1.size();i++)
        {
            s1.insert(nums1[i]);
        }
        
        for(int j=0;j<nums2.size();j++)
        {
            int key_variable=nums2[j];
            if(s1.find(key_variable)!=s1.end())
            {
                v1.push_back(key_variable);
                s1.erase(key_variable);
            }
        }
        return v1;
    }
};
/*
we have created an unordered set for nums1 array then we have created a variable named key in nums2 array , if the key equals any variable present in the s1 unorderd set then we will remove that element from s1 so that while checking in nums2 if the repetitive element comes in nums2 then it would check in s1 and so it will not be printed so no duplicate element will be printed .
unorderd set is collecton of elements without duplicate elements
*/