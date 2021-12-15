#include<bits/stdc++.h>
using namespace std;
typedef         long long       ll;
typedef         vector<ll>      vll;
#define         ss              ' '
#define         nn              "\n"
#define         fi              first
#define         se              second
#define         PB              pop_back
#define         pb              push_back
#define         pi              acos(-1.0)
#define         gcd(a,b)        __gcd(a,b)
#define         OO              1000000007
#define         NN              printf("\n")
#define         zz(v)           (ll)v.size()
#define         lcm(a,b)        (a*b)/gcd(a,b)
#define         no              printf("NO\n")
#define         mo              printf("-1\n")
#define         yes             printf("YES\n")
#define         S(a)            scanf("%lld",&a)
#define         all(p)          p.begin(),p.end()
#define         P(a)            printf("%lld\n",a)
#define         db              printf("be steady\n")
#define         mms(ar,a)       memset(ar,a,sizeof(ar))
#define         SS(a,b)         scanf("%lld %lld",&a,&b)
#define         PP(a,b)         printf("%lld %lld\n",a,b)
#define         prv(v)          for(auto it:v) cout<<it<<ss;NN;
#define         SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)

ll ar[200010],tk;
void solve(){
    ll a=0,b=0,c=0,n,i,j,k,m,o,x=-1,y,z,w=7;
    ll p=0,sm=0,cnt=0,mx=-OO,mn=OO,k1,k2;
    SS(n,k);
    vll v1,v2;
    for(i=0;i<n;i++){
        SS(a,b);
        v1.pb(a);
        v2.pb(b);
    }
    sort(all(v1));
    sort(all(v2));
    v1.pb(OO);
    printf("Case %lld:\n",++tk);
    while(k--){
        S(x);
        auto it=lower_bound(all(v2),x);
        y=it-v2.begin();
        it=upper_bound(all(v1),x);
        z=it-v1.begin();
        z=n-z;
        P(n-y-z);
    }
}

int main(){
//    freopen("input.txt", "r", stdin);
    ll t;
    S(t);
    while(t--)
        solve();

    return 0;
}
