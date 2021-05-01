class Solution {
public:
    int countBinarySubstrings(string s) {
        if(s.length() == 1)
            return 0;
        vector<int> v(s.length(),0);
        int zcount=0,ocount=0;
        int index=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '0')
            {
                if(i!=0 && s[i-1] == '1')
                {
                    v[index] =ocount;
                    ocount=0;
                    index++;
                }
                zcount++;
            }
            if(s[i] == '1')
            {
                if(i!=0 && s[i-1] == '0')
                {
                    v[index] = zcount;
                    zcount=0;
                    index++;
                }
                ocount++;
            }
        }
        if(zcount!=0)
        {
            v[index]=zcount;
            // index++;
        }
        if(ocount!=0)
        {
            v[index]=ocount;
            // index++;
        }
        int ans=0;
        for(auto a:v)
        {
            cout<<a<<" ";
        }
        for(int i=0;i<index;i++)
        {
            ans+=min(v[i],v[i+1]);
        }
        
        return ans;
    }
};