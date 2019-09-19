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

ll br[111];
bool ar[111];
vll vs;
void sieve(){
    ll n=111;
    ll i,j;
    vs.pb(2LL);
    for(i=3;i<n;i+=2){
        if(ar[i]==0){
            vs.pb(i);
            if(i>n/i) continue;
            for(j=i*i;j<=n;j+=(i+i)) ar[j]=1;
        }
    }
}

int main()
{
//    freopen("input.txt","r",stdin);
    ll a,b,c,i,j,t,k=0,m,n,o,x,y,z;
    sieve();
    S(t);
    while(t--){
        memset(br,0,sizeof(br));
//        for(i=0;i<111;i++) br[i]=0;
        S(n);
        printf("Case %lld: %lld = ",++k,n);
        for(i=2;i<=n;i++){
            a=i;
            for(j=0;vs[j]<=a;j++){
                if(a%vs[j]==0){
                    c=0;
                    while(a%vs[j]==0){
                        a/=vs[j];
                        c++;
                    }
                    br[vs[j]]+=c;
                }
            }
        }
        for(i=2;i<=n;i++){
            if(br[i]>0) x=i;
        }
        for(i=2;i<x;i++){
            if(br[i]>0) printf("%lld (%lld) * ",i,br[i]);
        }
        printf("%lld (%lld)\n",x,br[x]);
    }

    return 0;
}
