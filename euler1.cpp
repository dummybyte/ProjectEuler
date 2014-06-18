#include <iostream>

using namespace std;

#define FOR(i,n) for(i=0;i<n;i++)
#define pb(x) push_back(x)
#define ll long long

int main()
{
	ll ans=0;
	for(int i=1;i<=1000;i++)
		if(i%3==0 || i%5==0)
			ans+=i;
	cout<<ans;
		
}