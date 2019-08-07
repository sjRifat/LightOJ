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
#define     pi              2*acos(0.0)
typedef     long long       ll;
typedef     vector<ll>      vll;
 
int main()
{
    double a,b,c,i,j,k,m,n,o,x,y,z;
    ll lie,t=0;
    S(lie);
    while(lie--){
        scanf("%lf",&a);
        double sa=pi*a*a;
        double sqa=(a+a)*(a+a);
        printf("Case %lld: %.2f\n",++t,sqa-sa);
    }
 
    return 0;
}
 
