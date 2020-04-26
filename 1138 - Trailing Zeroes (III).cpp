#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ll a,b,m,n,i,j,x,y,t,c=0;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        ll lo=0,ans=0;
        ll hi=1000000000;
        while(lo<=hi){
            ll mid=(hi+lo)/2LL;
            x=mid;
            ll sm=0;
            while(x){
                sm+=(x/5);
                x/=5;
            }
            if(sm==n){
                ans=mid;
                hi=mid-1;
            }
            else if(sm<n) lo=mid+1;
            else hi=mid-1;
        }
        if(ans==0) printf("Case %lld: impossible\n",++c);
        else printf("Case %lld: %lld\n",++c,ans);
    }
 
    return 0;
}
