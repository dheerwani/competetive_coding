#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}

	int maxValue = INT_MIN;

	int maxArr[n][n];
	maxArr[n-1][n-1] = arr[n-1][n-1];
	int maxval = arr[n-1][n-1];

	//initialize the row first;
	for(int j=n-2;j>=0;j--)
	{
		if(arr[n-1][j] > maxval)
		{
			maxval = arr[n-1][j];
		}
		maxArr[n-1][j] = maxval;
	}
	maxval = arr[n-1][n-1];
	//initialize the column
	for(int i=n-2;i>=0;i--)
	{
		if(arr[i][n-1] > maxval)
		{
			maxval = arr[i][n-1];
		}
		maxArr[i][n-1] = maxval;
	}

	for(int i=n-2;i>=0;i--)
	{
		for(int j=n-2;j>=0;j--)
		{
			if(maxArr[i+1][j+1] - arr[i][j] > maxValue)
			{
				maxValue = maxArr[i+1][j+1] - arr[i][j];
			}

			maxArr[i][j] = max(arr[i][j] , max(maxArr[i+1][j],maxArr[i][j+1]));
		}
	}

	cout<<maxValue<<endl;
	return 0;
}