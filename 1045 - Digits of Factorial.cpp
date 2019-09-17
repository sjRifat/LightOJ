#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		se              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

double ar[1000010];

int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    ll a,b,c,i,j,t,k,lie,m,n,o,x,y,z=0;
    for(i=1;i<=1000000;i++) ar[i]=ar[i-1]+log(i);
    S(t);
    while(t--){
        SS(a,b);
        x=ar[a]/log(b)+1;
        printf("Case %lld: %lld\n",++z,x);
    }

    return 0;
}
