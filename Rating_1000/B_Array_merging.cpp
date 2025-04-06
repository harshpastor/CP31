#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

typedef vector<ll> vl;

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" ";_print(x); cerr<<endl;
#else
#define debug(x)
#endif

void getv(vl &vec){ for (int i=0;i<vec.size();i++)cin>>vec[i]; }

void solve()
{
    
    ll n;cin>>n;
    vl a(n),b(n);
    vl fb(2*n+1,0);
    getv(a);
    getv(b);
    ll ans = 0;
    for(ll i=0;i<n;){
        ll cnt = 0;
        ll curr = b[i];
        while(i<n && b[i]==curr){
            cnt++;
            i++;
        }
        fb[curr]=max(cnt,fb[curr]);
        ans = max(ans,fb[curr]);
    }
    for(ll i=0;i<n;){
        ll cnt = 0;
        ll curr = a[i];
        while(i<n && a[i]==curr){
            cnt++;
            i++;
        }
        ans = max(ans,cnt+fb[curr]);

    }

    cout<<ans<<endl;
}


int32_t main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}