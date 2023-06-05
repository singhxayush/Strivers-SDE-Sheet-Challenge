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

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    int i = 0;
    while(i<n)
    {
        if(arr[i] != arr[arr[i]-1]) swap(arr[i], arr[arr[i]-1]);
        else i++;
    }
    for(int i=0; i<n; i++) if(arr[i] != i+1) return {i+1, arr[i]};
}

void run_time_terror_()
{
    int n; cin>>n;
    vector<int> v(n);
    for(auto & x : v) cin>>x;
    pair x = missingAndRepeating(v, n);
    cout<<x.first<<" "<<x.second<<endl;
}

int32_t main()
{
    fastio
    testcases run_time_terror_();
}