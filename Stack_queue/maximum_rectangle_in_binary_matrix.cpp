class Solution {
public:
    int MAH(vector<int> &arr)
    {
        stack<int> s;
        int area{};
        int maxArea{};
        int i;
        for(i=0;i<arr.size();)
        {
            if(s.empty() || arr[s.top()]<= arr[i])
            {
                s.push(i++);
            }
            else
            {
                while(!s.empty() && arr[s.top()] > arr[i])
                {
                    int top = s.top();
                    s.pop();
                    if(s.empty())
                    {
                        area = arr[top] * i;
                    }
                    else
                    {
                        area = arr[top] * (i - s.top() - 1);
                    }
                    maxArea = max(area,maxArea);
                }
            }
        }
        while(!s.empty())
        {
            int top = s.top();
                    s.pop();
                    if(s.empty())
                    {
                        area = arr[top] * i;
                    }
                    else
                    {
                        area = arr[top] * (i - s.top() - 1);
                    }
                    maxArea = max(area,maxArea);
        }
        cout<<maxArea<<endl;
        return maxArea;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
       i f(matrix.size() == 0)
            return 0;
        int rows = matrix.size();
        int columns = matrix[0].size();
        // cout<<rows;
        
        int ans{};
        if(rows == 0)
            return 0;
        vector<int> temp;
        for(int i=0;i<columns;i++)
        {
            temp.push_back(matrix[0][i] - '0');
        }
        
        ans = MAH(temp);
        // cout<<ans;
        for(int i=1;i<rows;i++)
        {
           
               for(int j=0;j<columns;j++)
               {
                   if(matrix[i][j] == '0')
                   {
                       temp[j] = 0;
                   }
                   else
                   {
                       temp[j]++;
                   }
               }
            ans = max(ans,MAH(temp));
            
            }
        return ans; 
        }
       
    
};
