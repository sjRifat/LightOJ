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
typedef		long long       ll;
typedef		vector<ll>      vll;

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,p=0,n,o,x,y,z;
    S(t);
    while(t--){
        ll ar[111],s=0;
        memset(ar,0,sizeof(ar));
        S(n);
        for(i=1;i<=n;i++) S(ar[i]);
        for(i=1;i<=n;i++){
            if(i!=ar[i]){
                for(j=1;j<=n;j++){
                    if(i==ar[j]) break;
                }
                swap(ar[i],ar[j]);
                s++;
            }
        }
        printf("Case %lld: %lld\n",++c,s);
    }

    return 0;
}
