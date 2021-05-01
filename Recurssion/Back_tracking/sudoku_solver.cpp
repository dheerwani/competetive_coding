#include<bits/stdc++.h>
using namespace std;

bool isallowed(int sudo[][9],int i,int j,int n,int number)
{
	for(int x=0;x<n;x++)
	{
		if(sudo[i][x]==number || sudo[x][j] == number)
		{
			return false;
		}
	}

	int sn = sqrt(n);
	int sx = (i/sn)*sn;
	int sy = (j/sn)*sn;

	for(int x=sx;x<sx+sn;x++)
	{
		for(int y=sy;y<sy+sn;y++)
		{
			if(sudo[x][y] == number)
			{
				return false;
			}
		}
	}

	return true;
}

bool solveSudo(int sudo[][9],int i,int j,int n)
{
	if(i==n)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<sudo[i][j]<<" ";
			}
			cout<<endl;
		}


		return true;
	}

	if(j==n)
	{
		return solveSudo(sudo,i+1,0,n);
	}

	if(sudo[i][j]!= 0)
	{
		return solveSudo(sudo,i,j+1,n);
	}

	for(int x=1;x<=n;x++)
	{
		if(isallowed(sudo,i,j,n,x))
		{
			sudo[i][j] = x;

			bool isnext = solveSudo(sudo,i,j+1,n);
			if(isnext)
			{
				return true;
			}
		}
	}
	sudo[i][j] = 0;
	return false;

}


int main()
{
	int mat[9][9] = 
	{
		{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}
	};

	solveSudo(mat,0,0,9);

	
	return 0;
}