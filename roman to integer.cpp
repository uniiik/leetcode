class Solution {
public:
    int romanToInt(string str) {
        map<char , int> roman;
        roman.insert(make_pair('I',1));
        roman.insert(make_pair('V',5));
        roman.insert(make_pair('X',10));
        roman.insert(make_pair('L',50));
        roman.insert(make_pair('C',100));
        roman.insert(make_pair('D',500));
        roman.insert(make_pair('M',1000));
        
        
        int len=str.length();
        
        int result=roman[str[len-1]];
        for(int i=len-2;i>=0;i--)
        {
            if(roman[str[i+1]]>roman[str[i]])
                result=result-roman[str[i]];
            else
            {result=result+roman[str[i]];}
        
         
        }
         return result; 
    }
  
};