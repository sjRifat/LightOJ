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
 
bool ar[1000010];
vll vs;
void sieve(){
    ll n=1000010;
    ll i,j;
    vs.pb(2LL);
    for(i=3LL;i<=n;i+=2LL){
        if(ar[i]==0){
            vs.pb(i);
            if(i>n/i) continue;
            for(j=i*i;j<=n;j+=(i+i)) ar[j]=1;
        }
    }
}
 
int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    ll a,b,c,i,j,t,k,lie,m,n,o,x,y,z=0;
    sieve();
    S(t);
    while(t--){
        S(n);
        m=1LL;
        for(i=0LL;vs[i]<=n/vs[i];i++){
            c=1LL;
            while(n%vs[i]==0LL){
                n/=vs[i];
                c++;
            }
            m*=c;
        }
        if(n!=1LL) m*=2LL;
        printf("Case %lld: %lld\n",++z,m-1LL);
    }
 
    return 0;
}
 
