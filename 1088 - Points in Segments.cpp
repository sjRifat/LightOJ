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

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,p,q,x,y,z;
    S(t);
    while(t--){
        vll v;
        SS(n,q);
        while(n--){
            S(a);
            v.pb(a);
        }
        printf("Case %lld:\n",++c);
        while(q--){
            SS(x,y);
            auto it1=lower_bound(all(v),x);
            auto it2=upper_bound(all(v),y);
            a=it1-v.begin();
            b=it2-v.begin();
            printf("%lld\n",b-a);
        }
    }

    return 0;
}
