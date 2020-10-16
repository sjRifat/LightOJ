#include <bits/stdc++.h>
using namespace std;

int ar[100010];
int tree[100010];

int query(int idx){
    int sum=0;
    while(idx>0){
        sum+=tree[idx];
        idx-=(idx&-idx);
    }
    return sum;
}

void update(int idx,int val,int n){
    while(idx<=n){
        tree[idx]+=val;
        idx+=(idx&-idx);
    }
}

int main(){
    int n,a,b,i,j,q,x,t,c=0;
    scanf("%d",&t);
    while(t--){
        printf("Case %d:\n",++c);
        memset(tree,0,sizeof(tree));
        scanf("%d %d",&n,&q);
        for(i=1;i<=n;++i){
            scanf("%d",&ar[i]);
            update(i,ar[i],n);
        }
        while(q--){
            scanf("%d",&x);
            if(x==1){
                scanf("%d",&a);
                b=query(a+1)-query(a);
                printf("%d\n",b);
                update(a+1,-b,n);
            }
            if(x==2){
                scanf("%d %d",&a,&b);
                update(a+1,b,n);
            }
            if(x==3){
                scanf("%d %d",&a,&b);
                printf("%d\n",query(b+1)-query(a));
            }
        }
    }

    return 0;
}

