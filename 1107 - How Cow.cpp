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
#define     SSS(a,b,c,d)    scanf("%lld %lld %lld %lld",&a,&b,&c,&d)
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
typedef     long long       ll;
typedef     vector<ll>      vll;
 
int main()
{
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,x1,y1,x2,y2;
    S(lie);
    while(lie--){
        printf("Case %lld:\n",++c);
        SSS(x1,y1,x2,y2);
        S(n);
        while(n--){
            SS(x,y);
            if(x>=x1&&x<=x2 && y>=y1&&y<=y2)
                printf("Yes\n");
            else printf("No\n");
        }
    }
 
    return 0;
}
