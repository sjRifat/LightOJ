
#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lf %lf",&a,&b)
#define 	SSS(a,b,c)      scanf("%lf %lf %lf",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t;
    double v1,v2,v3,a1,a2,m,n,x,y;
    S(t);
    while(t--){
        SSS(v1,v2,v3);
        SS(a1,a2);
        double t1=v1/a1;  // t=v/a
        double t2=v2/a2;
        double tmax=max(t1,t2);
        double bird_distance=tmax*v3;  // s=vt
        double s1=v1*t1-.5*t1*t1*a1;  // s=ut-0.5at2
        double s2=v2*t2-.5*t2*t2*a2;
        printf("Case %lld: %.6f %.6f\n",++c,s1+s2,bird_distance);
    }

    return 0;
}
