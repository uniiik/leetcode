class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int max_count=0;
        int chunks=0;
        for(int i=0;i<arr.size();i++)
        {
            max_count=max(max_count,arr[i]);
            
            if(max_count==i)
                chunks++;
        }
        return chunks;
    }
};