#include<bits/stdc++.h>
using namespace std;
typedef	    long long       ll;
typedef	    vector<ll>      vll;
#define	    ss              ' '
#define	    nn              "\n"
#define	    PB              pop_back
#define     pb              push_back
#define	    pi              acos(-1.0)
#define	    gcd(a,b)        __gcd(a,b)
#define	    OO              1000000007
#define	    zz(v)           (ll)v.size()
#define	    lcm(a,b)        (a*b)/gcd(a,b)
#define     no              printf("NO\n")
#define     yes             printf("YES\n")
#define     S(a)            scanf("%lld",&a)
#define	    all(p)          p.begin(),p.end()
#define     P(a)            printf("%lld\n",a)
#define     db              printf("be steady\n")
#define	    mms(ar,a)       memset(ar,a,sizeof(ar))
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     PP(a,b)         printf("%lld %lld\n",a,b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)

struct str{
    ll aa,bb;
}st[1000001];

ll tc=0;
void solve(){
    ll a=0,b=0,c=0,i,j,t,k,lie,r,m,n,o,x,y,z;
    ll p=0,sm1=0,sm2=0,sm,cnt=0,q;
    SS(n,r);
    SS(p,q);
    a+=st[n].aa;
    b+=st[n].bb;
    a-=st[r].aa;
    b-=st[r].bb;
    a-=st[n-r].aa;
    b-=st[n-r].bb;
    while(p%2==0){
        p/=2;
        sm1++;
    }
    while(p%5==0){
        p/=5;
        sm2++;
    }
    a+=(sm1*q);
    b+=(sm2*q);
    sm=min(a,b);
    printf("Case %lld: %lld\n",++tc,sm);
}

ll clc(ll n,ll x){
    ll p=0,sm=0,cnt=0;
    while(n){
        n/=x;
        sm+=n;
    }
    return sm;
}

int main(){
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
    ll i,n,t;
    st[0].aa=0;
    st[0].bb=0;
    for(i=1;i<=1000000;i++){
        if(i%2==0){
            ll x=clc(i,2);
            st[i].aa=x;
        }
        else st[i].aa=st[i-1].aa;
    }
    for(i=1;i<=1000000;i++){
        if(i%5==0){
            ll x=clc(i,5);
            st[i].bb=x;
        }
        else st[i].bb=st[i-1].bb;
    }
    S(t);
    while(t--){
        solve();
    }

    return 0;
}
