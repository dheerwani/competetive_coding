int countBinarySubstrings(string s) {
        int current{1};
        int prev{};
        int ans{};
        for(int i=1;i<s.length();i++)
        {
            if(s[i] == s[i-1])
            {
                current++;
            }
            else
            {
                prev = current;
                current=1;
            }
            if(current<=prev)
            {
                ans++;
            }
        }
        
            return ans;
        
    }
