https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1

// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int sum = 0;
        int m = n;
        int digit = log10(n)+1;
        while(m)
        {
            int rem = m % 10;
            m = m/10;
            sum += rem * rem * rem;
            
            
            
            
        }
        if(sum==n)
        return "Yes";
        else
        return "No";
        
    }
};
