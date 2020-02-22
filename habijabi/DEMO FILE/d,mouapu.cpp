#include <bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;

int main( )
{

    ll x, y, valx, valy,  d , ans;
    int t, ka = 0;

    scanf("%d", &t);

    while(t--)
    {

        d = 0;
        scanf("%lld %lld %lld %lld", &x, &valx, &y, &valy);

        d = (valy - valx) / (y - x);

        ans = valx - ((x - 1) * d);

        printf("Case %d: %lld\n", ++ka, ans);


    }

    return 0;
