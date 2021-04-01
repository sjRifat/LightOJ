#include<bits/stdc++.h>
using namespace std;
typedef	    long long       ll;
typedef	    vector<ll>      vll;
#define	    ss              ' '
#define	    nn              "\n"
#define	    fi              first
#define	    se              second
#define	    PB              pop_back
#define     pb              push_back
#define	    pi              acos(-1.0)
#define	    gcd(a,b)        __gcd(a,b)
#define	    OO              1000000007
#define	    NN              printf("\n")
#define	    zz(v)           (ll)v.size()
#define	    lcm(a,b)        (a*b)/gcd(a,b)
#define     no              printf("NO\n")
#define     mo              printf("-1\n")
#define     yes             printf("YES\n")
#define     S(a)            scanf("%lld",&a)
#define	    all(p)          p.begin(),p.end()
#define     P(a)            printf("%lld\n",a)
#define     db              printf("be steady\n")
#define	    mms(ar,a)       memset(ar,a,sizeof(ar))
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     PP(a,b)         printf("%lld %lld\n",a,b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)

ll ar[200010],tc=0;
void solve(){
    ll a=1,b=0,c=0,n,i,j,k,m,q,o,x=OO,y=0,z;
    ll p=0,sm=0,cnt=0,mx=-OO,mn=OO,ans[100010];
    SS(n,x);
    printf("Case %lld:\n",++tc);
    string st,s;
    for(char cc='A';cc<'A'+n;cc++) st.pb(cc);
    s=st;
    cout<<st<<nn;
    x--;
    while(x--){
        next_permutation(all(st));
        if(st==s) break;
        cout<<st<<nn;
    }
}

int main(){
//	freopen("input.txt", "r", stdin);
    ll t;
    S(t);
    while(t--)
        solve();

    return 0;
}
