#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		mms(ar,a)       memset(ar,a,sizeof(ar))
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
#define		eps             0.0000001

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n;
    S(t);
    while(t--){
        double ab,bc,ac,ad,de,bd,ae,ec,r,x,rn;
        cin>>ab>>ac>>bc>>r;
        ad=ab/2;
        n=50;
        double lo=0,hi=ab;
        double s=(ab+bc+ac)/2;
        double bt_area=sqrt(s*(s-ab)*(s-bc)*(s-ac));
        while(n--){
            ad=(hi+lo)/2;
            de=(ad*bc)/ab;
            ae=(ad*ac)/ab;
            s=(ad+de+ae)/2;
            double t_area=sqrt(s*(s-ad)*(s-ae)*(s-de));
            double q_area=bt_area-t_area;
            rn=t_area/q_area;
            if(rn>r) hi=ad;
            else lo=ad;
        }
        printf("Case %lld: %.7f\n",++c,ad);
    }

    return 0;
}
