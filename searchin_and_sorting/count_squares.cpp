int countSquares(int N) {
        // code here
        int limit = sqrt(N);
        int count=0;
        for(int i=1;i<=limit;i++)
        {
            int ans = pow(i,2);
            if(ans<N)
            {
                count++;
            }
        }
        return count;
    }