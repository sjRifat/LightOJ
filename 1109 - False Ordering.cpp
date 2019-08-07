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
 
vll v;
vll vv[35];
 
void div(){
    for(ll i=1;i<=1000;i++){
        ll c=0;
        for(ll j=1;j<=sqrt(i);j++){
            if(i%j==0){
                if(i/j==j) c++;
                else c+=2;
            }
        }
        vv[c].pb(i);
    }
}
 
void pushu(){
    for(ll i=1;i<=32;i++){
        sort(all(vv[i]));
        reverse(all(vv[i]));
    }
    for(ll i=1;i<=32;i++){
        for(ll j=0;j<zz(vv[i]);j++){
            v.pb(vv[i][j]);
        }
    }
}
 
int main()
{
    ll a,b,c=0,i,j,lie,t,k=1,m,n,o,p,x,y,z;
    div();
    pushu();
    S(lie);
    while(lie--){
        S(n);
        printf("Case %lld: %lld\n",++c,v[n-1]);
    }
 
    return 0;
}
 
