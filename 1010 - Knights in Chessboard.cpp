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
#define     D               %lld
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
typedef     long long       ll;
typedef     vector<ll>      vll;
 
int main()
{
    ll a,b,c=0,i,j,t,k,m,n,o,x,y,z,ar[100010];
    sf1(t);
    while(t--)
    {
        sf2(a,b);
        if(a==1 || b==1)
            printf("Case %lld: %lld\n",++c,max(a,b));
        else if(a==2|| b==2)
        {
            ll mx=max(a,b);
            if(mx==2) printf("Case %lld: %d\n",++c,4);
            else if(mx%4==0)
                printf("Case %lld: %lld\n",++c,mx);
            else if(mx%2==0)
                printf("Case %lld: %lld\n",++c,mx+2);
            else
            {
                printf("Case %lld: %lld\n",++c,mx+1);
            }
        }
        else
        {
            if((a*b)%2==0)
                printf("Case %lld: %lld\n",++c,(a*b)/2);
            else
                printf("Case %lld: %lld\n",++c,(a*b)/2+1);
        }
    }
 
    return 0;
}
