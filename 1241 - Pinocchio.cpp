#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,n,j,x,t;
    S(t);
    while(t--){
        vll v;
        ll ar[12],s=0;
        S(n);
        ar[0]=2;
        for(i=1;i<=n;i++) S(ar[i]);
        for(i=0;i<n;i++){
            x=ar[i+1]-ar[i];
            if(x) v.pb(x);
        }
        for(i=0;i<zz(v);i++){
            v[i]+=4;
            v[i]/=5;
            s+=v[i];
        }
        printf("Case %lld: %lld\n",++c,s);
    }

    return 0;
}
