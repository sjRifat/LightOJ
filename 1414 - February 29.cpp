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
    map<string,ll>mm;
    mm["January"]=1;
    mm["February"]=2;
    mm["March"]=3;
    mm["April"]=4;
    mm["May"]=5;
    mm["June"]=6;
    mm["July"]=7;
    mm["August"]=8;
    mm["September"]=9;
    mm["October"]=10;
    mm["November"]=11;
    mm["December"]=12;

    S(t);
    while(t--){
        string m1,m2;
        cin>>m1;
        scanf("%lld, %lld",&d1,&y1);
        cin>>m2;
        scanf("%lld, %lld",&d2,&y2);

        if(mm[m1]>2) y1++;
        if(mm[m2]<2 || mm[m2]==2&&d2<29) y2--;
        ll y1_400=y1/400;
        ll y1_100=y1/100;
        ll y1_4=y1/4;
        ll s1=y1_4+y1_400-y1_100;

        if(y1%400==0) s1--;
        else if(y1%100==0) s1=s1;
        else if(y1%4==0) s1--;

        ll y2_400=y2/400;
        ll y2_100=y2/100;
        ll y2_4=y2/4;
        ll s2=y2_4+y2_400-y2_100;
        printf("Case %lld: %lld\n",++c,s2-s1);
    }

    return 0;
}
