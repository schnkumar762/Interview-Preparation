//User function Template for C++

https://www.geeksforgeeks.org/problems/sum-of-all-prime-numbers-between-1-and-n4404/1

class Solution{
	public:
   	long long int prime_Sum(int n){
   	    // Code here
   	    //	int n;
long long int sum =0;
	//cin>>n;
	int arr[n];
	for(int i=0;i<=n;i++)
	{
		if(i>1)
		arr[i]=i;
		else
		arr[i]=-1;
		
	}

	for(int i=1;i<=n;i++)
	{
		if(arr[i] > 0)
		{
			sum = sum + i;
			
			for(int m=2;m*i<=n;m++)
			{
			
			arr[i*m]=-1;
			}
			
		}
	}
	return sum;

   	}    
};
