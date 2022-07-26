class Solution {
public:
    int lengthOfLastWord(string s) {
        int last=s.length()-1;
        int count=0;
        //consume trailing spaces
        while(last>=0 && s[last]==' ')
        {
            last-=1;
            
        }
            while(last>=0 && s[last]!=' ')
            {  count++;
            last--;}
            
           return count; 
   
    }
};