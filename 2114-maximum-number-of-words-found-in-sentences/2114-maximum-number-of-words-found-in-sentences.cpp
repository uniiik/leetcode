class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0;
        int ans=0;
        for(int i=0;i<sentences.size();i++)
        {
            int max=1;
            //int ans=0;
            for(int j=0;j<sentences[i].size();j++)
            {
                if(sentences[i][j]==' ')
                {max++;}
                
            }
            
            if(ans<max)
                ans=max;
        }
        return ans;
    }
};