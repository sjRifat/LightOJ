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
        ll ar[111],br[111],cr[111];
        S(n);
        x=0;
        for(i=0;i<n;i++){
            S(ar[i]);
        }
        for(i=0;i<n;i++){
            S(br[i]);
        }
        for(i=0;i<n;i++){
            cr[i]=br[i]-ar[i]-1;
        }
        for(i=0;i<n;i++){
            if(cr[i]==2 ) c++;
            x^=cr[i];
        }
//        if(c==n){
//            if(n%2==1) printf("Case %lld: white wins\n",++t);
//            else printf("Case %lld: black wins\n",++t);
//        }
        if(x) printf("Case %lld: white wins\n",++t);
        else printf("Case %lld: black wins\n",++t);
//        cout<<x<<nn;
//        printf("%lld\n",x);
    }
 
    return 0;
}
 
