class Solution {
public:
    bool isPerfectSquare(int num) {
        bool flag=0;
        long long i=0;
        for( i;i<=num;i++)
        {
            if(i*i==num)
            { flag=1;
            break;}
            else 
                flag=0;
        }
     return flag;   
    }
};