class Solution {
public:
    struct JOB
    {
        int start,end,profit;
    };
    
    static bool cmp (JOB a,JOB b)
    {
        return a.end < b.end;   
    }
    
    int lastOcc (JOB j[],int i)
    {
        int l=0 ,r=i-1;
        
        while(l<=r)
        {
            int mid = (l+r)/2;
            
            if(j[mid].end <= j[i].start)
            {
                if(j[mid+1].end <= j[i].start)
                {
                    l=mid+1;
                }
                else
                {
                    return mid;
                }
            }
            else
            {
                r=mid-1;
            }
        }
        
        return -1;
    }
    
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        JOB j[startTime.size()];
        int n =startTime.size();
        for(int i=0;i<n;i++)
        {
            j[i].start = startTime[i];
            j[i].end = endTime[i];
            j[i].profit = profit[i];
         }
        
        sort(j,j+n,cmp);
        
        int *table =new int[n];
        table[0] = j[0].profit;
        int ans=0;
        for(int i=1;i<n;i++)
        {
            
            int last= lastOcc(j,i);
            int curr = j[i].profit;
            if(last!=-1)
            {
                curr+= table[last];
            }
            
            table[i] = max(curr , table[i-1]);
        }
        ans = table[n-1];
        delete[] table;
        return ans;
        
    }
};