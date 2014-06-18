#include <iostream>

using namespace std;

#define FOR(i,n) for(i=0;i<n;i++)
#define pb(x) push_back(x)
#define ll long long

int main()
{
	ll i=3,ans=2,a=1,b=2,c=3;
	while(c<4000000)
	{
		c=a+b;
		if(c%2==0)
			ans+=c;
		a=b;
		b=c;
	}
	cout<<ans;
	return 0;	
}