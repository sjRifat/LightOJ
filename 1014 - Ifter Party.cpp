#include<bits/stdc++.h>
using namespace std;
#define     pb              push_back
#define     PB              pop_back
#define     nn              "\n"
#define     all(p)          p.begin(),p.end()
#define     zz(v)           (ll)v.size()
#define     se              ' '
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
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,l,lie,n,o,x,y,z;
    S(t);
    while(t--){
        vll v;
        SS(a,b);
        x=a-b;
        for(i=1;i<=sqrt(x);i++){
            if(x%i==0){
                if(x/i==i){
                    if(i>b) v.pb(i);
                }
                else{
                    if(i>b) v.pb(i);
                    if(x/i>b)v.pb(x/i);
                }
            }
        }
        if(zz(v)==0) printf("Case %lld: impossible\n",++c);
        else{
            sort(all(v));
            printf("Case %lld:",++c);
            for(i=0;i<zz(v);i++) printf(" %lld",v[i]);
            printf(nn);
        }
    }

    return 0;
}
