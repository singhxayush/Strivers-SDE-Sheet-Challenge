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

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.

    // next_permutation(permutation.begin(), permutation.end());
    // for(auto x : permutation) cout<<x<<" "; cout<<"\n";
    // return permutation;

    // alternate soln(internal implementation of above one)
    int idx = -1;
    for(int i=n-2; i>=0; i--)
    {
        if(permutation[i] < permutation[i+1])
        {
            idx = i;
            break;
        }
    }
    if(idx == -1)
    {
        reverse(permutation.begin(), permutation.end());
        for(int i=0; i<n; i++) cout<<permutation[i]<<" "; cout<<"\n";
        return permutation;
    }
    for(int i = n-1; i>=0; i--)
    {
        if(permutation[i] > permutation[idx])
        {
            swap(permutation[i], permutation[idx]);
            break;
        }
    }

    reverse(permutation.begin()+idx+1, permutation.end());
    for(int i=0; i<n; i++) cout<<permutation[i]<<" "; cout<<"\n";
    return permutation;
}

void run_time_terror_()
{
    int n; cin>>n;
    vector<int> v(n);
    for(auto & x : v) cin>>x;
    
    nextPermutation(v, n);
}

int32_t main()
{
    fastio
    testcases run_time_terror_();
}