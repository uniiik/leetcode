class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v(n+1,0);
        
        
        for(int i=0;i<=n;i++)
        {
            if(i%2==0)
                v[i]=v[i/2];
            else 
                v[i]=v[i/2]+1;
        }
        
        return v;
        
    }
};


/*
if number is even then formula for bit is no of bits /2
else if nuber is odd then add 1 to no of bits /2
*/