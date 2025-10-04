
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
    // Set unique and sorted
    // set<int> s;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     s.insert(x);
    // }
    // for (auto it : s)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
    // auto it=s.end();
    // it--;
    // it--;
    // auto it=s.begin();
    // it++;
    // it++;
    // cout<<*it<<endl;

    // find elements in set

    // auto it = s.find(6);
    //     if (it!=s.end())
    //     {
    //         cout<<"Found"<<" "<<*it<<endl;
    //     }
    //     else{
    //         cout<<"Not found"<<endl;
    //     }
    // auto it = s.begin();
    // int cnt = 0;
    // while (it != s.end())
    // {
    //     if (it == s.find(6))
    //     {
    //         cout << cnt << " " << *it << " ";
    //     }
    //     cnt++;
    //     it++;
    // }

    // s.erase(6);
    // s.empty();

    // lower bound : return equal or greater elements
    // auto it=s.lower_bound(7);
    // cout<<*it<<endl;
    // upper bound : returns only greater then the given element(Logn)
    // auto it = s.upper_bound(9);

    // if (it != s.end())
    //     cout << *it << endl;
    // else
    //     cout << "End" << endl;

    // multiset :store elements sorted and not unique
    // all operation are same as set
    // set earse gives trubbles
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }

    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;
    // if we use earse function directly it will delete all the same elments
    // ms.erase(3);

    //  for(auto it : ms)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // We have to use find function hare to remove only a single element which we wanna delete

    //auto it = ms.find(3);
   // ms.erase(it);//(2logn)

    // for (auto it : ms)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;

    //cout<<ms.count(5)<<endl;//for a single element (logn)//if more then one (logn+k)

    //lower bound,upper bound : same as Set
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