#include<bits/stdc++.h>
using namespace std;
int p[100005];
vector<long long int> primes;

void sieve(int *p)
{
	primes.push_back(2);
	for(int i=3;i<100005;i+=2)
	{
		p[i]=1;
	}

	
	for(long long int i=3;i<100005;i+=2)
	{
		if(p[i] == 1)
		{
			// cout<<i;
			primes.push_back(i);
			for(long long int j=i*i ;j<100005;j+=i)
			{
				p[j]=0;
			}
		}
	}
}


int main() {
	// int n=100005;
	sieve(p);
	cout<<"sieve done"<<endl;
	int t{};
	cin>>t;
	while(t--)
	{
		// for(auto a:primes)
		// {
		// 	cout<<a<<endl;
		// }
		int ip{};
		cin>>ip;
		long long int ans{};

		for(int i=0;i<ip;i++)
		{
			ans+=primes[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}