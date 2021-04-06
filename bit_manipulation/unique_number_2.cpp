int singleNumber(vector<int>& nums) {
        int sum[32] ={0};
        
        for(auto a:nums)
        {
            for(int i=0;i<32;i++)
            {
                if(a & (1<<i))
                   {
                       sum[i]++;
                   }
            }
        }
        
        // long long int p=1;
        int ans{0};
        
        for(int i=0;i<32;i++)
        {
            if(sum[i]%3 == 1)
            ans += (1<<i);
        }
        
        return ans;
    }