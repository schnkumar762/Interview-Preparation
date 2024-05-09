// User function Template for C++

class Solution {
  public:
  int sum(int n)
  {
      int summ = 0;
      while(n)
      {
          int rem = n % 10;
          summ += rem;
          n=n/10;
      }
      return summ;
  }
  string numtostring(int n)
  {
     return to_string(n);
      
  }
  int pali(string s)
  {
      string s2= s;
      reverse(s.begin(),s.end());
      if(s==s2) return 1;
      return 0;
  }
  
    int isDigitSumPalindrome(int n) {
        // code here
        int s=sum(n);
        string  s2 = numtostring(s);
        int ans= pali(s2);
        return ans;
        
    }
};

https://www.geeksforgeeks.org/problems/sum-of-digit-is-pallindrome-or-not2751/1
