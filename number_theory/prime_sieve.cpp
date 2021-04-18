// time complexity - O(n loglog(n))
#include<bits/stdc++.h>
using namespace std;

vector<int> primes;
long long int n=1000000;
int p[1000000]={0};
void prime_sieve(int *p)
{
	primes.push_back(2);
	for(int i=3;i<=1000000;i+=2)
	{
		p[i]=1;
	}

	for(long long int i=3;i<=1000000;i+=2)
	{
		if(p[i]==1)
		{
			primes.push_back(i);

			for(long long int j=i*i;j<=1000000;j=j+i)
			{
				p[j]=0;
			}
		}
	}
	p[2]=1;
	p[0]=0;
	p[1]=0;
}

bool isPrime(long long int no)
{
	if(no<n)
	{
		return p[no]==1?true:false;
	}
	else
	{
		for(long long int i=0;primes[i]* (long long)primes[i] <no;i++)
		{
			if(no%primes[i] == 0)
			{
				return false;
			}
		}
		return true;
	}
}

int main()
{
	long long int n{};
	cin>>n;

	

	prime_sieve(p);

	// for(int i=0;i<n;i++)
	// {
	// 	if(p[i] == 1)
	// 	{
	// 		cout<<i<<" ";
	// 	}
	// }

	cout<<isPrime(n);

	return 0;

}