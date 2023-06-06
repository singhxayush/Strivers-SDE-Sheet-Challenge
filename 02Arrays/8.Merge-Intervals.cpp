#include<bits/stdc++.h>
using namespace std;

#define int long long int
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

vector<vector<int>> mergeIntervals(vector<vector<int>> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++) 
    {
        if (ans.empty() || arr[i][0] > ans.back()[1]) ans.push_back(arr[i]);
        else ans.back()[1] = max(ans.back()[1], arr[i][1]);
    }
    return ans;
}


void run_time_terror_()
{
    int n; cin>>n;
    vector<vector<int>> v;
    for(int i=0; i<2; i++)
    {
        vector<int> vec(n);
        for(int & x : vec) cin>>x;
        v.push_back(vec);
    }
    // for(int i=0; i<v.size(); i++)
    // cout<<v[i][0]<<" "<<v[i][1]<<"\n";

    mergeIntervals(v);
}

int32_t main()
{
    fastio
    run_time_terror_();
}