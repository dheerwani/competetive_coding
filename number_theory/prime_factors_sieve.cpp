#include<bits/stdc++.h>
using namespace std;

vector<int> primes;
void sieve(int *p,int n)
{
	primes.push_back(2);
	for(int i=3;i<100000;i+=2)
	{
		if(p[i] == 1)
		{
			primes.push_back(i);
			for(int j=i*i;j<100000;j+= 2*i)
			{
				p[i]=0;
			}
		}
	}
	p[0]=p[1]=0;
}

void prime_facto(int n)
{
	vector<int> facts;
	for(int i=0;(primes[i] * primes[i])<=n;i++)
	{
		if(n%primes[i] == 0)
		{
			facts.push_back(primes[i]);
			while(n%primes[i] == 0)
			{
				n = n/primes[i];
			}
		}
	}
	if(n!=1)
	{
		facts.push_back(n);
	}
	for(auto a:facts)
	{
		cout<<a<<endl;
	}
	// return facts;
}

int main()
{
	int p[100000];
	for(int i=0;i<100000;i++)
	{
		p[i]=1;
	}
	sieve(p,100000);

	int n{};
	cin>>n;

	prime_facto(n);

	// for(auto a:ans)
	// {
	// 	cout<<a<<endl;
	// }
	return 0;
}