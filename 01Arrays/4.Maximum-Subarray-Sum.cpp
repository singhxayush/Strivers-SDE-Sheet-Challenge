#include <bits/stdc++.h>
using namespace std;

// #define int long long int
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define testcases \
    int tt;       \
    cin >> tt;    \
    while (tt--)

#define dbg(x) cout << 'd' << 'b' << 'g' << '-' << '>' << x << endl;
#define pr(x) cout << x << endl;
#define pr2(x, y) cout << x << ' ' << y << endl;
#define pr3(x, y, z) cout << x << ' ' << y << ' ' << z << endl;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ump unordered_map<ll, ll>
#define uns unordered_set<ll>
#define vll vector<ll>

long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long s = 0, res = LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        s += arr[i];
        if(s > res) res = s;
        if(s < 0) s = 0;
    }
    return max(res, (long long)0);
}

void run_time_terror_()
{
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    cout<<maxSubarraySum(a, n);
}

int32_t main()
{
    fastio
        run_time_terror_();
}