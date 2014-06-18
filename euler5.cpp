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
	ll i=1,temp=2520,lcm,ans,dummy=1;
	while(i<=20)
	{
		i=gcd(temp,i);
		temp=i;
		i++;
	}
	for(i=1;i<=20;i++)
		dummy*=i;
	ans=dummy/temp;
	
	
	
	//ans=lcm;
	cout<<ans;
    return 0;
}