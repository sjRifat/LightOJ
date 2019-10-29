#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

vll v[22222];
ll visited[100010];
ll level[100010];

ll bfs(ll u){
    visited[u]=1;
    level[u]=0;
    queue<ll>q;
    q.push(u);
    ll mx1=1,mx2=0;
    while(!q.empty()){
        u=q.front();
        visited[u]=1;
        q.pop();
        for(ll i=0;i<zz(v[u]);i++){
            ll p=v[u][i];
            if(!visited[p]){
                visited[p]=1;
                level[p]=level[u]+1;
                if(level[p]%2==0) mx1++;
                else mx2++;
                q.push(p);
            }
        }
    }
    return max(mx1,mx2);
}

int main()
{
//    freopen("input.txt","r",stdin);
    ll a,b,c,i,j,t,tt=0,mx,k,node,edge;
    S(t);
    while(t--){
        memset(visited,0,sizeof(visited));
        memset(level,0,sizeof(level));
        S(edge);
        for(i=0;i<22222;i++) v[i].clear();
        mx=0;
        for(i=1;i<=edge;i++){
            SS(a,b);
            v[a].pb(b);
            v[b].pb(a);
            mx=max(mx,max(a,b));
        }
        c=0;
        for(i=0;i<=mx;i++){
            if(zz(v[i])>0 && !visited[i]){
                ll x=bfs(i);
                c+=x;
            }
        }
        printf("Case %lld: %lld\n",++tt,c);
    }

    return 0;
}
