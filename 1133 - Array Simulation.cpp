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
    ll a,b,cc=0,i,j,lie,t,k=1,m,n,o,p,x,y,z;
    S(lie);
    while(lie--){
        ll ar[111];
        char c;
        SS(m,n);
        for(i=0;i<m;i++) S(ar[i]);
        while(n--){
            scanf(" %c",&c);
            if(c=='S'){
                S(x);
                for(i=0;i<m;i++) ar[i]+=x;
            }
            if(c=='M'){
                S(x);
                for(i=0;i<m;i++) ar[i]*=x;
            }
            if(c=='D'){
                S(x);
                for(i=0;i<m;i++) ar[i]/=x;
            }
            if(c=='R'){
                reverse(ar,ar+m);
            }
            if(c=='P'){
                SS(x,y);
                swap(ar[x],ar[y]);
            }
        }
        printf("Case %lld:\n",++cc);
        for(i=0;i<m-1;i++) printf("%lld ",ar[i]);
        printf("%lld\n",ar[m-1]);
    }
 
    return 0;
}
 
