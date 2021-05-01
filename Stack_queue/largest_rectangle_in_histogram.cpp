class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int area{0};
        int maxArea{0};
        int i=0;
        
        for(i=0;i<heights.size();)
        {
            if(s.empty() == true || heights[s.top()] <= heights[i])
            {
                s.push(i++);
            }
            else
            {
                while(!s.empty()&&heights[s.top()] > heights[i])
                {
                    int top= s.top();
                    s.pop();
                    if(s.empty())
                    {
                    area = heights[top] *i;
                    }
                    else
                    {
                    area = heights[top] * (i - s.top() -1); 
                    }
                    maxArea = max(maxArea,area);
                    cout<<"here";
                }
            }
            
        }
        cout<<i<<endl;
        while(s.empty() == false)
        {
            int top =s.top();
            s.pop();
            if(s.empty() == true)
                {
                    area = heights[top] *i;
                }
            else
                {
                    area = heights[top] * (i - s.top() -1);
                
                }
                 maxArea = max(maxArea,area);
                cout<<area<<endl;
        }
        return maxArea;
        
    }
};
