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

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    int n = matrix.size();
    int m = matrix[0].size();
    // cout<< m << endl;
    unordered_set<int> r, c;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(matrix[i][j] == 0)
            {
                r.insert(i);
                c.insert(j);
            }
        }
    }
    if(r.size() == n || c.size() == m)
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++) matrix[i][j] = 0;

    for(auto x : r) for(int i=0; i<m; i++) matrix[x][i] = 0;
    for(auto x : c) for(int i=0; i<n; i++) matrix[i][x] = 0;

}

void run_time_terror_()
{
    int n, m; cin>>n>>m;
    vector<vector<int>> matrix;
    for(int i=0; i<n; i++)
    {
        vector<int> v(m);
        for(int j=0; j<m; j++) cin>>v[j];
        matrix.push_back(v);
    }
    setZeros(matrix);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) cout<<matrix[i][j]<<" ";
        cout<<"\n";
    }
}

int32_t main()
{
    fastio
    testcases run_time_terror_();
}