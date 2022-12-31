class Solution
{
    public:
    
    
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        
        map<int,int> mp;
        queue<pair<Node*,int>> q;
        
        
        q.push({root,0});
        
        while(!q.empty())
        {
         auto p = q.front();
         Node* curr = p.first;
         int hd = p.second;//hd=horizontal distance
         if(mp.find(hd)==mp.end())
         {
             mp.insert({hd,curr->data});
         }
         q.pop();
         if(curr->left != NULL)
         {
             q.push({curr->left,hd-1});
         }
         if(curr->right != NULL)
         {
             q.push({curr->right,hd+1});
         }

        }
        
        
        vector<int> res;
        for(auto it:mp){
            res.push_back(it.second);
        }
        return res;
    }

};
