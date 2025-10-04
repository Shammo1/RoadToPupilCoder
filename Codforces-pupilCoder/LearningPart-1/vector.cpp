
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fi first
#define se second
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define No cout << "NO" << '\n';
#define Yes cout << "YES" << '\n';
#define no cout << "No" << '\n';
#define yes cout << "Yes" << '\n';
#define in(vec, n)              \
    for (int i = 0; i < n; i++) \
        cin >> vec[i];
#define out(vec, n)             \
    for (int i = 0; i < n; i++) \
        cout << vec[i] << " ";
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
///*    /\_/\
// *   (= ._.)
// *   / >  \>
// */       //
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // for(auto x: v)
    // {
    //     cout<<x<<" ";
    // }
    // vector<int>v;
    // for (int i = 0; i <n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    //  for(auto x: v)
    // {
    //     cout<<x<<" ";
    // }
    // vector<int>v(3);
    // v.resize(4);
    // v.assign(4,-1);
    //  for(auto x: v)
    // {
    //     cout<<x<<" ";
    // }
    // auto it = v.begin();
    // cout<<*it;
    // auto it=v.end();//--v.end();
    // it--;
    // cout<<*it;
    // for(auto it=v.begin();it!=v.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    // reverse(v.begin(),v.end());
    // sort(v.begin(),v.end());
    // sort(v.rbegin(),v.rend());
    // sort(v.begin(),v.end(),greater<int>());
    // for (auto x : v)
    // {
    //     cout << x << " ";
    // }
    int x=*max_element(v.begin(),v.end());
    int y=*min_element(v.begin(),v.end());
    cout<<x<<" "<<y;
}
int main()
{
    fastio int t = 1;
    //  cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}