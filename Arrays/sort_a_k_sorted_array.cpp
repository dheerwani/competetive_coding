using namespace std;

void solve(int arr[],int n,int k)
{
    int result[n];
    int ini{};
    if(k<n)
    {
        ini =k+1;
    }
    else
    {
        ini =k;
    }
        priority_queue<int,vector<int>,greater<int>> pq(arr,arr+ini);
    int index=0;
    for(int i=k+1;i<n;i++)
    {
        result[index]=pq.top();
        // cout<<pq.top();
        pq.pop();
        pq.push(arr[i]);
        index++;
    }
    
    while(!pq.empty())
    {
        result[index]=pq.top();
        pq.pop();
        index++;
    }
    // cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
}

int main() {
    
    int t{};
    cin>>t;
    while(t--)
    {
        int n{},k{};
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        solve(arr,n,k);
        
    }
	//code
	return 0;
}