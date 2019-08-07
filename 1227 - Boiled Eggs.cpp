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
        ll ar[33],s=0,c=0;
        SSS(n,a,b);
        for(j=0;j<n;j++){
            S(x);
            s+=x;
            if(c<a && s<=b) c++;
        }
        printf("Case %lld: %lld\n",++t,c);
    }
 
    return 0;
}
 
