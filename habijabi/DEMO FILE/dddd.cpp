#include <bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;

int main( )
{

    ll x, y, vx, vy,  d , sum;
    int t = 1,test;

    scanf("%d", &test);

    while(test--)
    {

        d = 0;
        scanf("%lld %lld %lld %lld", &x, &vx, &y, &vy);

        d = (vy - vx) / (y - x);

        sum = vx - ((x - 1) * d);

        printf("Case %d: %lld\n", t++, sum);


    }

    return 0;
}
