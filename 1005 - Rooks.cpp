#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		sp              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
#define		mod             1000003
typedef		long long       ll;
typedef		vector<ll>      vll;

ll fac(ll a,ll b){
    ll m=1;
    for(ll i=a;i<=b;i++) m*=i;
    return m;
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,r,o,p,q,x,xx,y,z;
    S(t);
    while(t--){
        SS(n,r);
        x=n-r;
        xx=fac(x+1,n);
        y=fac(1,r);
        z=fac(x+1,n);
        printf("Case %lld: %lld\n",++c,(xx/y)*z);
    }

    return 0;
}
