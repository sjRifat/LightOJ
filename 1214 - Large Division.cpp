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
 
ll mod(string num, ll a)
{
    ll res=0;
    for (ll i=0;i<num.length();i++)
         res=(res*10+(ll)num[i]-'0')%a;
    return res;
}
 
int main(){
//    freopen("in.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z,ar[200010];
    S(lie);
    while(lie--){
 
        string s;
        cin>>s;
        S(n);
        n=abs(n);
        if(s[0]=='-') s.erase(0,1);
        z=mod(s,n);
        if(z==0) printf("Case %lld: divisible\n",++c);
        else printf("Case %lld: not divisible\n",++c);
    }
 
    return 0;
}
 
