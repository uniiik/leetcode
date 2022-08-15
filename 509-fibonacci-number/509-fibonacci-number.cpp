class Solution {
public:
    int fib(int n) {
        if(n<=1)
            return n;
        else
            return fib (n-1)+fib(n-2);
    }
};
//we are using recursive function here we are not storing the value we are just returning the output by just passing value in recursive function