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
#define     SSS(a,b,c,d)    scanf("%lld.%lld.%lld.%lld",&a,&b,&c,&d)
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
typedef     long long       ll;
typedef     vector<ll>      vll;
 
ll bin(ll a){
    vll v;
    while(a){
        v.pb(a%2);
        a/=2;
    }
    reverse(all(v));
    ll s=0;
    for(ll i=0;i<zz(v);i++){
        s=s*10+v[i];
    }
    return s;
}
 
int main()
{
    ll a,b,c,d,a1,b1,c1,d1,a2,b2,c2,d2,i,j,lie,n=0;
    S(lie);
    while(lie--){
        SSS(a,b,c,d);
        SSS(a1,b1,c1,d1);
        a2=bin(a);
        b2=bin(b);
        c2=bin(c);
        d2=bin(d);
        if(a1==a2&&b1==b2&&c1==c2&&d1==d2)
            printf("Case %lld: Yes\n",++n);
        else
            printf("Case %lld: No\n",++n);
    }
 
    return 0;
}
 
