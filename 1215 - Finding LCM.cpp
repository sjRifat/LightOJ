#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
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
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z,ar[200010];
    S(t);
    while(t--){
        SSS(a,b,n);
        x=lcm(a,b);
        if(n%x==0){
            y=n/x;
            while(true){
                z=gcd(x,y);
                if(z==1) break;
                y*=z;
                x/=z;
            }
            printf("Case %lld: %lld\n",++c,y);
        }
        else printf("Case %lld: impossible\n",++c);
    }

    return 0;
}
