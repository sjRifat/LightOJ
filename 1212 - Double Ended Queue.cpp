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
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z;
    S(lie);
    while(lie--){
        SS(a,b);
        vll v;
        string s;
        getchar();
        printf("Case %lld:\n",++c);
        while(b--){
            cin>>s;
            if(s[1]=='u') S(x);
            if(zz(v)==0){
                if(s=="popLeft" || s=="popRight") printf("The queue is empty\n");
                else{
                    v.pb(x);
                    if(s=="pushLeft") printf("Pushed in left: %lld\n",x);
                    else printf("Pushed in right: %lld\n",x);
                }
            }
            else if(zz(v)==a){
                if(s=="pushLeft" || s=="pushRight") printf("The queue is full\n");
                else {
                    if(s=="popLeft"){
                        printf("Popped from left: %lld\n",v[0]);
                        reverse(all(v));
                        v.PB();
                        reverse(all(v));
                    }
                    else{
                        printf("Popped from right: %lld\n",v[zz(v)-1]);
                        v.PB();
                    }
                }
            }
            else{
                if(s=="pushRight"){
                    v.pb(x);
                    printf("Pushed in right: %lld\n",x);
                }
                else if(s=="pushLeft"){
                    reverse(all(v));
                    v.pb(x);
                    reverse(all(v));
                    printf("Pushed in left: %lld\n",x);
                }
                else if(s=="popLeft"){
                    printf("Popped from left: %lld\n",v[0]);
                    reverse(all(v));
                    v.PB();
                    reverse(all(v));
                }
                else if(s=="popRight"){
                    printf("Popped from right: %lld\n",v[zz(v)-1]);
                    v.PB();
                }
            }
        }
    }
 
    return 0;
}
 
