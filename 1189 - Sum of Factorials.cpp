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
    ll a,b,c=0,i,j,t,k,lie,m=1,n,o,x,y,z;
    vll v;
    v.pb(m);
    for(i=1;m<=1000000000000000000;i++){
        m*=i;
        v.pb(m);
    }
    S(t);
    while(t--){
        vll vv;
        ll p=0;
        x=0;
        z=0;
        y=22;
        S(n);
        while(n){
            auto it=upper_bound(all(v),n);
            x=it-v.begin()-1;
            if(x<y){
                vv.pb(x);
                n-=v[x];
            }
            else if(n==2&&v[x]==2){
                vv.pb(0);
                n-=1;
            }
            else{
                p=1;
                break;
            }
            y=x;
        }
        if(p==1) printf("Case %lld: impossible\n",++c);
        else{
            sort(all(vv));
            printf("Case %lld: ",++c);
            for(i=0;i<zz(vv)-1;i++) printf("%lld!+",vv[i]);
            printf("%lld!\n",vv[zz(vv)-1]);
        }
    }

    return 0;
}
