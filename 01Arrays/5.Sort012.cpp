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

void sort012(int *arr, int n)
{
    //   Write your code here
    int l = 0, m = 0, h = n - 1;
    while(m <= h)
    {
        if(arr[m] == 0) swap(arr[l++], arr[m++]);
        else if(arr[m] == 1) m++;
        else swap(arr[m], arr[h--]);
    }
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}

void run_time_terror_()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort012(a, n);
}

int32_t main()
{
    fastio
    run_time_terror_();
}