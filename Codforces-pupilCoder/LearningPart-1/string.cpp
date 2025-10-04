
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
    //  string s, p;
    //  cin >> s>>p;
    // cout<<s<<" "<<s.size();
    //  cout << s + p;
    // if (s == p) // compare string
    //  yes else no

    // finding a substring from a string with else if

    // int res = s.find(p);
    // if (res != string::npos)
    // {
    //     cout << res;
    // int cnt = p.size();
    //     for (int i = res; i < s.size(); i++)
    //     {
    //         if (cnt == 0)
    //         {
    //             break;
    //         }
    //         cout << s[i];
    //         cnt--;
    //     }
    // }
    // else
    //     cout << p << " NOT found.";

    // Find Multiple Occurrences of a Substring

    // int res = -1;

    // while ((res = s.find(p, res + 1)) != string::npos)
    // {
    //     cnt = p.size();
    //     for (int i = res; i < s.size(); i++)
    //     {
    //         if (cnt != 0)
    //         {
    //             cout << s[i];
    //             cnt--;
    //         }
    //             }
    //     cout << endl;
    // }

    // Find Occurrence of a Partial Substring
    string s = "welcome to GfG!";
    char sub[] = "come to my house";

    //  char x[] ="shammo saha";
    int res = s.find(sub, 0, 4);
    if (res != string::npos)
        cout << res;
}
int main()
{
    fastio int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}