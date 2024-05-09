class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            int a=0;
            int b = 0;
            reverse(s.begin(),s.end());
            for(int i = 0;i<s.size();i++)
            {
                if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
                {
                  b=i-1;
                  reverse(s.begin()+a,s.begin()+b+1);
                  a=i+1;
                }
            }
            b=s.size()-1;
                   reverse(s.begin()+a,s.begin()+b+1);
            return s;
            
        }
};

https://www.geeksforgeeks.org/problems/reversing-the-equation2205/1
