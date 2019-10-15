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
typedef     long long       ll;
typedef     vector<ll>      vll;

bool ar[10000010];
vll v;
void sieve(){
    ll i,j,n=10000010;
    v.pb(2LL);
    for(i=3;i<=n;i+=2){
        if(ar[i]==0){
            v.pb(i);
            if(i>n/i) continue;
            for(j=i*i;j<=n;j+=(i+i)) ar[j]=1;
        }
    }
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c,i,j,t,k,lie,m,n,o,x,y,z=0;
    sieve();
    S(t);
    while(t--){
        S(n);
        c=0;
        m=n;
        a=0;
        while(m--){
            bool bb=binary_search(all(v),m);
            if(bb) break;
        }
        auto it=lower_bound(all(v),m);
        b=it-v.begin();
        while(v[a]<=v[b]){
            if(v[a]+v[b]==n){
                c++;
                a++;
                b--;
            }
            else if(v[a]+v[b]>n) b--;
            else a++;
        }
        printf("Case %lld: %lld\n",++z,c);
    }

    return 0;
}
