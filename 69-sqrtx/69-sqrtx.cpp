class Solution {
public:
    int mySqrt(int x) {
        long long i=0;
        int sqrt;
       while(i*i<=x)
       { sqrt=i;
           i++;
           
       }
       return sqrt; 
    }
};