#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

#define FOR(i,n) for(i=0;i<n;i++)
#define pb(x) push_back(x)
#define ll long long
#define N 600851475143

bool prime[1000000];

int main()
{
	
	ll i=2,ans=-1,d=2;
	memset(prime,true,sizeof prime);
	prime[0]=false;
	prime[1]=false;
	while(i<=1000000)
	{
		d=2;
		while(d*i<=1000000)
		{
			prime[d*i]=false;
			d++;
		}
		i++;
	}
	for(i=2;i<=sqrt(N);i++)
	{
		if(prime[i] && N%i==0)
			ans=i;
	}
	cout<<ans;
	return 0;	
}