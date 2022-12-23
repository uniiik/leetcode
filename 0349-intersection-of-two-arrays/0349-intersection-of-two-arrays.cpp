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