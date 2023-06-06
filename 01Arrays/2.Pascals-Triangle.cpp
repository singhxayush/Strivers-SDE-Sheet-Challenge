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


void printPascal(int n) 
{
    // Write your code here.
    vector<vector<int>> res;
    for(int i=1; i<=n; i++)
    {
        vector<int> v;
        v.push_back(1);
        if(i >= 2)
        {
            for(int j=1; j<i-1; j++) v.push_back(res[i-2][j]+res[i-2][j-1]);
            v.push_back(1);
        }
        res.push_back(v);
    }
    for(int i=0; i<res.size(); i++)
    {
        for(int j = 0; j < res[i].size(); j++) cout<<res[i][j]<<" ";
        cout<<"\n";
    }
}


void run_time_terror_()
{
    int n; cin>>n;
    printPascal(n);
}

int32_t main()
{
    fastio
    run_time_terror_();
}
