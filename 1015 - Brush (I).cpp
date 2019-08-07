#include<bits/stdc++.h>
using namespace std;
#define     pb              push_back
#define     PB              pop_back
#define     nn              "\n"
#define     all(p)          p.begin(),p.end()
#define     zz(v)           v.size()
#define     ss              ' '
#define     sf1(a)          scanf("%lld",&a)
#define     sf2(a,b)        scanf("%lld %lld",&a,&b)
#define     sf3(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
typedef     long long       ll;
typedef     vector<ll>      vll;
 
int main()
{
    ll a,b,c,i,j,t,k=0,m,n,o,x,y,z;
    sf1(t);
    while(t--)
    {
        ll ar[1010];
        c=0;
//        printf("\n");
        sf1(n);
        while(n--)
        {
            scanf("\n%lld",&x);
            if(x>0) c+=x;
        }
        printf("Case %lld: %lld\n",++k,c);
    }
 
    return 0;
 
}
