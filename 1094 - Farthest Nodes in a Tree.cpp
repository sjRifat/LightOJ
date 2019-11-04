#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef		vector<ll>      vll;
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

vll v[30003],cost[30003];
ll visited[30003],dist[30003],mxd=0,mxn=0;

void bfs(ll u){
    memset(visited,0,sizeof(visited));
    memset(dist,0,sizeof(dist));
    visited[u]=1;
    queue<ll>q;
    q.push(u);
    dist[u]=0;
    while(!q.empty()){
        u=q.front();
        visited[u]=1;
        q.pop();
        visited[u]=1;
        for(ll i=0;i<zz(v[u]);i++){
            ll p=v[u][i];
            if(!visited[p]){
                visited[p]=1;
                dist[p]=dist[u]+cost[u][i];
                if(dist[p]>mxd){
                    mxd=dist[p];
                    mxn=p;
                }
                q.push(p);
            }
        }
    }
}

int main()
{
//    freopen("input.txt","r",stdin);
    ll a,b,c,i,j,t,k,z=0,node,edge;
    S(t);
    while(t--){
        mxd=0,mxn=0;
        for(i=0;i<30003;i++) v[i].clear();
        for(i=0;i<30003;i++) cost[i].clear();
        S(node);
        for(i=1;i<node;i++){
            SSS(a,b,c);
            v[a].pb(b);
            v[b].pb(a);
            cost[a].pb(c);
            cost[b].pb(c);
        }
        bfs(0);
        bfs(mxn);
        printf("Case %lld: %lld\n",++z,mxd);
    }

    return 0;
}
