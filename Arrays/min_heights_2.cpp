sort(arr,arr+n);
int ans = arr[n-1] = arr[0];

for(int i=1;i<n-1;i++)
{
	int sub = min (arr[0] + k,arr[i+1]-k);
	int add = max(arr[n-1]-k , arr[i]+k);
	if(sub>0)
	{
		ans = min (ans,add-sub);
	}

}
return ans;
