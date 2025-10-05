
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
    // nested vector pair combination
    //     vector<pair<int,pair<string, int>>> v(n);
    //     for (int i = 0; i < n; i++)
    //     {
    //         string s;
    //         int mark,roll;
    //         cin>>s>>mark>>roll;
    //         v[i] ={roll,{s, mark}};
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout <<v[i].first<< "->" << v[i].second.first << " " << v[i].second.second << endl;
    //     }
    //      for(auto it :v)
    //      {
    //          cout<<it.first<<" "<<it.second<<endl;
    //      }

    // map vector combination

    // map<int, vector<int>> mp;
    // for (int i = 0; i < n; i++)
    // {
    //     int key;
    //     cin >> key;
    //     vector<int> v(key);
    // v.push_back(4);
    // v.push_back(3);
    // v.push_back(9);
    //     for (int j = 0; j < key; j++)
    //     {
    //         cin >> v[j];
    //     }

    //     mp[key] = v;
    // }
    // //  cout << mp.size();
    // for (auto it : mp)
    // {
    //     vector<int> v;
    //     v = it.second;
    //     cout << it.first << "->";
    //     for (auto x : v)
    //     {
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }

    map<int, set<int>> mp;
    for (int i = 0; i < n; i++)
    {
        int key;
        cin >> key;
        set<int> s;
        for (int i = 0; i < key; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        mp[key] = s;
    }

    for (auto it : mp)
    {
        set<int> s = it.second;
        cout << it.first << "->" << " ";
        for (auto x : it.second)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    //  finding lower_bound from the keys and then find lower bound of set from them
    int x = 3;
    int y = 7;
    auto it = mp.lower_bound(x);
    cout << it->first << endl;
    if (it != mp.end())
    {
        int ans = it->first;
        auto lb2 = mp[ans].lower_bound(y);
        if (lb2 != mp[ans].end())
        {
            cout << *lb2;
        }
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