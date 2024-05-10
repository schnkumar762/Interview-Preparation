https://leetcode.com/problems/count-primes/description/
class Solution {
public:
    int countPrimes(int n) {
     int arr[n+1];
     int count = 0;
     for(int i=0;i<n;i++)
     {
        if(i<2)
        arr[i]=-1;
        else
        arr[i]=i;
     }   
     for(int i=2;i<n;i++)
     {
        if(arr[i]>0)
        {
            count ++;
            for(int j=1;j*i<n;j++)
            {
                arr[j*i]=-1;
            }
        }
     }
     return count;
    }
};
