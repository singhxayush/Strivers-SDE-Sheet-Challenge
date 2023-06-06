#include<bits/stdc++.h>
using namespace std;

// #define int long long int
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define testcases int tt; cin>>tt; while(tt--)

#define dbg(x) cout<<'d'<<'b'<<'g'<<'-'<<'>'<<x<<endl;
#define pr(x) cout<<x<<endl;
#define pr2(x, y) cout<<x<<' '<<y<<endl;
#define pr3(x, y, z) cout<<x<<' '<<y<<' '<<z<<endl;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ump unordered_map<ll, ll>
#define uns unordered_set<ll>
#define vll vector<ll>

int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n = prices.size();
    vector<int> l(n), r(n);
    int mi = INT_MAX, ma = INT_MIN;
    for(int i=0; i<n; i++)
    {
        mi = min(prices[i], mi);
        l[i] = mi;
    }
    for(int i=n-1; i>=0; i--)
    {
        ma = max(prices[i], ma);
        r[i] = ma;
    }
    int res = 0;
    for(int i=0; i<n; i++) res = max(res, r[i]-l[i]);
    return res;
}

void run_time_terror_()
{
    int n; cin>>n;
    vector<int> v(n);
    for(auto & x : v) cin>>x;
    // cout<<
     maximumProfit(v);
}

int32_t main()
{
    fastio
    testcases run_time_terror_();
}