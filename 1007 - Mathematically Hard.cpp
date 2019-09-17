#include<bits/stdc++.h>
using namespace std;
#define     pb              push_back
#define     PB              pop_back
#define     nn              "\n"
#define     all(p)          p.begin(),p.end()
#define     zz(v)           (ll)v.size()
#define     se              ' '
#define     S(a)            scanf("%d",&a)
#define     SS(a,b)         scanf("%d %d",&a,&b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
typedef     long long       ll;
typedef     vector<ll>      vll;
 
int ar[5000005];
unsigned long long br[5000005];
 
void euler()
{
    for (int i=0;i<5000005;i++) ar[i]=i;
    for (int i=2;i<5000005;i++){
        if (ar[i]==i){
            ar[i]=i-1;
            for (int j=2;j*i<5000005;j++){
                ar[i*j] = (ar[i*j]/i)*(i-1);
            }
        }
    }
    br[1]=0;
    for (int i=2;i<5000005;i++){
        unsigned long long m = ar[i];
        br[i]=br[i-1]+m*m;
    }
}
 
int main(){
//    freopen("input.txt","r",stdin);
    int a,b,c,i,j,t,k=0,lie,n,o,x,y,z;
    euler();
    S(t);
    while(t--){
        SS(a,b);
        unsigned long long an=br[b]-br[a-1];
        printf("Case %d: %llu\n",++k,an);
    }
 
    return 0;
}
 
