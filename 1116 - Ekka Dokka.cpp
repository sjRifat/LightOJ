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
    ll a,b,c=0,i,j,lie,t,k=1,m,n,o,p,x,y,z;
    S(lie);
    while(lie--){
        S(n);
        if(n%2==1) printf("Case %lld: Impossible\n",++c);
        else{
            for(i=1;i<=n;i*=2){
                if((n/i)%2==1){
                    printf("Case %lld: %lld %lld\n",++c,n/i,i);
                    break;
                }
            }
        }
    }
 
    return 0;
}
 
