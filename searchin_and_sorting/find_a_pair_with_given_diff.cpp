#include <bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t{};
	cin>>t;
	while(t--)
	{
	    int n{};
	    cin>>n;
	    int key{};
	    cin>>key;
	    vector<int> v;
	    for(int i=0;i<n;i++)
	    {
	        int t{};
	        cin>>t;
	        v.push_back(t);
	    }
	    int f=0;
	    sort(v.begin(),v.end());
	    int i=0;
	    int j=1;
	    while(i<n && j<n)
	    {
	        if( i!=j && v[j]-v[i] == key)
	        {
	            f=1;
	            break;
	        }
	        else if(v[j]-v[i] < key)
	        {
	            j++;
	        }
	        else
	        {
	            i++;
	        }
	    }
	    if(f==0)
	    {
	        cout<<"-1"<<endl;
	    }
	    else
	    {
	        cout<<"1"<<endl;
	    }
	}
	return 0;
}