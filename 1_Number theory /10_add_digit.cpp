class Solution {
public:
int add (int n)
{
    int sum = 0;
    while(n)
    {
        int rem = n % 10;
        n= n/10;
         sum = sum + rem;
    }
    return sum;
}
    int addDigits(int num) {
        int ans = add(num);
        while(ans > 9)
        ans = add(ans);
        return ans;

        
    }
};

https://leetcode.com/problems/add-digits/
