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
        ll ax,ay,bx,by,cx,cy,dx,dy,mota,lomba;
        SS(ax,ay);
        SS(bx,by);
        SS(cx,cy);
        dx=ax+cx-bx;
        dy=ay+cy-by;
        ll area = (((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax)));
        printf("Case %lld: %lld %lld %lld\n",++t,dx,dy,abs(area/2));
 
    }
 
    return 0;
}
 
