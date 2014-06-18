/*
Author :  ARVIND PANDEY
 */
#include <iostream>
#include <cstring>
#include <string.h>
#include <stdlib.h>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <map>

using namespace std;

struct _ {
    ios_base::Init i;

    _() {
        cin.sync_with_stdio(0);
        cin.tie(0);
    }
} _;

#define FOR(i,n) for(i=0;i<n;i++)
#define pb(x) push_back(x)
#define ll long long

ll power(ll a, ll n)//////             O(log n)
{
    ll ans = 1;
    while (n) {
        if (n % 2 == 1)
            ans *= a;
        a *= a;
        n /= 2;
    }
    return ans;
}

ll gcd(ll a, ll b)////                 O(log(a+b))
{
    int r;
    while (b) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
////////////////////////////////////////////////////////////////////////////////////CODE BEGINS/////////////////////////////////////////////////////////

int main() 
{
	ll i=2,c=1,d;bool prime[1000005];
	prime[0]=false;prime[1]=false;
	memset(prime,true,sizeof prime);
	for(i=2;i<=1000000;i++)
	{
		d=2;
		while(d*i<=1000000)
		{
			prime[d*i]=false;
			d++;
		}
	}
	c=0;
	for(i=2;i<=1000000;i++)
	{
		if(prime[i])
			c++;
		if(c==10001)
		{
			cout<<i;
			break;
		}
	}
	
	return 0;
}