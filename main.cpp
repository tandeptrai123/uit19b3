#include <bits/stdc++.h>
#define ll long long
#define reu(i,a,b) for (int i=a;i<=b;++i)
const int N=1e1;
using namespace std;
int n,a[N],f[N][N];
ll dp(int l,int r)
{
    if (l==r-1 || l==r) return 0;
    if (f[l][r]!=-1) return f[l][r];
    ll res=0;
    reu(i,l+1,r-1) res=max(res,dp(l,i)+dp(i,r));
    return f[l][r]=res+a[l]*a[r];
}
int main()
{
    cin>>n;
    reu(i,1,n) cin>>a[i];
    memset(f,-1,sizeof f);
    cout<<dp(1,n);
    return 0;
}
