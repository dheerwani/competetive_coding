class Solution{
    public:
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<pair<int,int>> s;
       vector<int> indi;
       for(int i=0;i<n;i++)
       {
           if(s.empty())
           {
               indi.push_back(-1);
           }
           else if (s.size()!=0 && (s.top().first) > price[i] )
           {
               indi.push_back(s.top().second);
           }
           else if (s.size()!=0 && (s.top().first) <= price[i])
           {
               while(s.size()!=0 && (s.top().first) <= price[i])
               {
                   s.pop();
               }
               if(s.empty())
               {
                   indi.push_back(-1);
               }
               else
               {
                   indi.push_back(s.top().second);
               }
           }
           s.push(make_pair(price[i],i));
       }
       for(int i=0;i<n;i++)
       {
           int temp = i - indi[i];
           indi[i] = temp;
       }
       return indi;
    }
};
