#include <bits/stdc++.h>
using namespace std;
#define     pb          push_back
#define     nn          "\n"
#define     ss          ' '
#define     FOR(i,a,b)      for(i=a;i<=b;i++)
typedef     long long       ll;
typedef     vector<ll>      vll;
 
int main()
{
    ll a,n,d,k;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a>10) cout<<10<<ss<<a-10<<nn;
        else cout<<0<<ss<<a<<nn;
    }
 
    return 0;
}
