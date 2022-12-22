class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int n=matrix[0].size();
        priority_queue<int> q;
        for(int i=0;i<n*n;i++)
        {
            q.push(matrix[i/n][i%n]);
            if(q.size()>k)
                q.pop();
        }
        return q.top();
    }
};
/*
we have made an max heap and added all the elements until our size is larger than k

*/