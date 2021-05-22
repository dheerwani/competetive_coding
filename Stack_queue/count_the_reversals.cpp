
int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
    // your code here
    int l=s.length();
    if(l&1) return -1;
    stack<char> st;
    int c=0;
    int c2=0;
    for(int i=0;i<l;i++)
    {
        if(s[i] == '{'){
            st.push(s[i]);
            c++;
        }
        else
        {
            if(!st.empty())
            {
                st.pop();
                c--;
            }
            else
            {
                c2++;
            }
        }
    }
    if(c&1) c = c/2+1;
    else c=c/2;
    if(c2&1) c2 =c2/2+1;
    else c2 = c2/2;
    
    return c+c2;
}