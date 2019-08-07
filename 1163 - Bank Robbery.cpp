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
 
int main(){
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z,ar[200010];
    S(t);
    while(t--){
        vll v;
        S(n);
        ll s=n;
        m=n;
        while(n){
            s+=(n/=10);
        }
        for(i=s;i<s+100;i++){
            if(i-i/10==m) v.pb(i);
            if(zz(v)==2) break;
        }
        printf("Case %lld: ",++c);
        for(i=0;i<zz(v)-1;i++) printf("%lld ",v[i]);
        printf("%lld\n",v[zz(v)-1]);
    }
 
    return 0;
}
