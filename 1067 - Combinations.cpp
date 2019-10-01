#include<bits/stdc++.h>
using namespace std;
#define     pb              push_back
#define     PB              pop_back
#define     nn              "\n"
#define     all(p)          p.begin(),p.end()
#define     zz(v)           (ll)v.size()
#define     sp              ' '
#define     S(a)            scanf("%lld",&a)
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
#define     mod             1000003
typedef     long long       ll;
typedef     vector<ll>      vll;

ll ar[1000010];

ll mod_inv(ll x,ll n,ll M){
    if(n==0) return 1;
    else if(n%2 == 0) return mod_inv((x*x)%M,n/2,M);
    return (x*mod_inv((x*x)%M,(n-1)/2,M))%M;
}

int main()
{
//    freopen("input.txt","r",stdin);
    ll a,b,ct=0,c,i,j,t,k,mx,mn,r,l,lie,n,o,x,y,z;
    ar[0]=1;
    for(i=1;i<=1000000;i++){
        ar[i]=i*ar[i-1];
        ar[i]%=mod;
    }
    S(t);
    while(t--){
        SS(n,r);
        x=n-r;
        y=(ar[r]*ar[x])%mod;
        y=ar[n]*mod_inv(y,mod-2,mod);
        printf("Case %lld: %lld\n",++ct,y%mod);
    }

    return 0;
}
