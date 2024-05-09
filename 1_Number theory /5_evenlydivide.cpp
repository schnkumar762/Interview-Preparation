  int evenlyDivides(int N){
        //code here
        int m=N;
        int count =0;
        while(m )
        {
            int rem = m % 10;
            if( rem != 0 && N % rem == 0)
            count ++;
            m=m/10;
        }
        return count;
    }

https://www.geeksforgeeks.org/problems/count-digits5716/1
