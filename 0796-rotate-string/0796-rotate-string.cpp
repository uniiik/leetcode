class Solution {
public:
    bool rotateString(string s, string goal) {
        
        return(s.size()==goal.size() && (s+s).find(goal)!=string::npos);
        //npos  actually means until the end of the string.
    }
};