#include<bits/stdc++.h>
using namespace std;
#define     pb              push_back
#define     PB              pop_back
#define     nn              "\n"
#define     all(p)          p.begin(),p.end()
#define     zz(v)           v.size()
#define     ss              ' '
#define     S(a)            scanf("%lld",&a)
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
typedef     long long       ll;
typedef     vector<ll>      vll;
 
int main()
{
    ll a,b,c,i,j,t=1,k,lie,m,n,o,x,y,z;
    S(lie);
    while(lie--){
        vector<pair<ll,string>>vp;
        string s;
        ll mn=1000001LL,mx=0LL;
        S(n);
        while(n--){
            cin>>s;
            SSS(a,b,c);
            vp.pb(make_pair(a*b*c,s));
        }
        for(i=0;i<zz(vp);i++){
            if(vp[i].first<mn){
                mn=vp[i].first;
                x=i;
            }
            if(vp[i].first>mx){
                mx=vp[i].first;
                y=i;
            }
        }
        if(mx==mn) printf("Case %lld: no thief\n",t);
        else cout<<"Case "<<t<<": "<<vp[y].second<<" took chocolate from "<<vp[x].second<<nn;
        t++;
    }
 
    return 0;
}
 
