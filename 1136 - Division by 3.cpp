#include<bits/stdc++.h>
using namespace std;
#define     pb              push_back
#define     PB              pop_back
#define     nn              "\n"
#define     all(p)          p.begin(),p.end()
#define     zz(v)           v.size()
#define     ss              ' '
#define     S(a)            scanf("%lld",&a)
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
typedef     long long       ll;
typedef     vector<ll>      vll;
 
int main()
{
    ll a,b,c,i,j,t=0,k,lie,m,n,o,x,y,z;
    S(lie);
    while(lie--){
        SS(a,b);
        a--;
        x=(a/3)*2;
        if(a%3==2) x++;
        y=(b/3)*2;
        if(b%3==2) y++;
        printf("Case %lld: %lld\n",++t,y-x);
    }
 
    return 0;
}
 
