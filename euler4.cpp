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
bool ispalin(int n)
{
	int m=n,rem,rev=0;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	if(m==rev)
		return true;
	else
		return false;
}

int main() 
{
	int i,ans=1,j,x,y;
	for(i=100;i<=999;i++)
	{
		for(j=100;j<=999;j++)
		{
			if(i*j>ans)
			{
				if(ispalin(i*j))
				{
					ans=i*j;
					//x=i;y=j;
				}	
			}
		}
	}
	cout<<ans;//<<" "<<x<<" "<<y;
    return 0;
}