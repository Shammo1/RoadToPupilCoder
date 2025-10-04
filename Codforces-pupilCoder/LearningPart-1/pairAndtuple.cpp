
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
    //    pair<string,int>p={"shammo",14};
    //    cout<<p.first<<" "<<p.second;

    int n;
    cin >> n;
    // pair<string,int>p[n];
    // for (int i = 0; i <n; i++)
    // {
    //    cin>>p[i].first>>p[i].second;
    // }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<p[i].first<<" "<<p[i].second<<'\n';
    // }

    // pair<string,pair<int,string>>p[n];
    // for (int i = 0; i <n; i++)
    // {
    //     cin>>p[i].first>>p[i].second.first>>p[i].second.second;
    // }

    // for (int i = 0; i <n; i++)
    // {
    //     cout<<p[i].first<<" "<<p[i].second.first<<" "<<p[i].second.second<<'\n';
    // }

    pair<pair<string, int>, pair<string, int>> p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first.first >> p[i].first.second >> p[i].second.first >> p[i].second.second;
    }
    for (int i = 0; i < n; i++)
    {
        cout << p[i].first.first << " " << p[i].first.second << " " << p[i].second.first << " " << p[i].second.second << '\n';
    }
}
int main()
{
    fastio int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}