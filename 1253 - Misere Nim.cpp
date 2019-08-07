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
 
int main(){
//    freopen("in.txt","r",stdin);
    ll a,b,c,i,j,t=0,k,lie,m,n,o,x,y,z;
    S(lie);
    while(lie--){
        c=0;
        ll ar[111];
        S(n);
        x=0;
        for(i=1;i<=n;i++){
            S(a);
            x=x^a;
        if(a==1) c++;
        }
        if(c==n){
            if(n%2==1) printf("Case %lld: Bob\n",++t);
            else printf("Case %lld: Alice\n",++t);
        }
        else if(x==0) printf("Case %lld: Bob\n",++t);
        else printf("Case %lld: Alice\n",++t);
//        cout<<x<<nn;
    }
 
    return 0;
}
 
