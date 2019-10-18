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
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y1,y2,d1,d2,z,ar[200010];
    S(t);
    getchar();
    while(t--){
        string s,ss;
        getline(cin,s);
        getline(cin,ss);
        for(i=0;i<zz(s);i++){
            if(s[i]==' ') s.erase(i,1),i--;
            if(s[i]>='A' && s[i]<='Z') s[i]+=32;
        }
        for(i=0;i<zz(ss);i++){
            if(ss[i]==' ') ss.erase(i,1),i--;
            if(ss[i]>='A' && ss[i]<='Z') ss[i]+=32;
        }
        sort(all(s));
        sort(all(ss));
        if(s==ss) printf("Case %lld: Yes\n",++c);
        else printf("Case %lld: No\n",++c);
    }

    return 0;
}
