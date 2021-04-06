int start;
    int length;
    string longestPalindrome(string s) {
        
        if(s == "" || s.length()<1) return "";
        
        if(s.length() == 1 ) return s;
        
        for(int i=0;i<s.length();i++)
        {
             DivideFromMiddle(s,i,i);
             DivideFromMiddle(s,i,i+1);
        }
        
        return s.substr(start,length);
        
        
    }
    void DivideFromMiddle(string a ,int left,int right)
    {
        
        while(left >=0 && right<a.length() && a[left] == a[right])
        {
            left--;
            right++;
        }
        int newlength = right - left -1;
        if(length < newlength)
        {
            start = left+1;
            length = newlength;
        }
        return ;
    }
};
