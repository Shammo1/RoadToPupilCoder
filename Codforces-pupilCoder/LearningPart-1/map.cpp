
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
    // map<int, int> mp;
    // for (int i = 0; i < n; i++)
    // {
    //     int x, y;
    //     cin >> x >> y;
    //     mp[x]={y};
    // }

    // // for (auto it : mp)
    // // {
    // //     cout << it.first << " " << it.second << endl;
    // // }

    // auto it=mp.find(4);
    // cout<<it->first<<" "<<it->second<<endl;
    // map<char, int> mp;
    // for (int i = 0; i < n; i++)
    // {
    //     char ch;
    //     cin >> ch;
    //     mp[ch]++;
    // }

    // for (int i = 0; i < 26; i++)
    // {
    //     char c = i + 97;
    //     cout <<c<<" "<< mp[c] << endl;
    // }

    //map with pair combination

    // map<int,pair<string,int>>mp;
    // for (int i = 0; i <n; i++)
    // {
    //     string s;
    //     int num;
    //     cin>>s>>num;
    //     mp[i]={s,num};
    // }
    // for(auto it:mp)
    // {
    //     cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
    // }

    // map<string, pair<int, int>, greater<>> mp;
    // for (int i = 0; i < n; i++)
    // {
    //     string s;
    //     int num, roll;
    //     cin >> roll >> s >> num;
    //     mp[s] = {roll, num};
    // }

    // for(auto it:mp)
    // {
    //     cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
    // }

    //finding element from map

    // auto it=mp.find("sa");
    // if (it!=mp.end())
    // {
    //     cout<<it->first<<" "<<it->second.first<<" "<<it->second.second<<endl;
    // }
    // else
    // {
    //     cout<<"Key not Found"<<endl;
    // }
    // cout<<mp.size()<<endl<<endl;
    // auto it = mp.find("saha");
    // if (it != mp.end())
    // {
    //     // cout<<it->first<<" "<<it->second.first<<" "<<it->second.second<<endl;
    //     mp.erase(it);
    // }
    // for(auto it:mp)
    // {
    //     cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
    // }
    //  cout<<endl<<mp.size()<<endl<<endl;

// lower bound:returns equal or greater element based on key (Logn)

    // map<int,int>mp;
    // for (int i = 0; i <n; i++)
    // {
    //     int x,y;
    //     cin>>x>>y;
    //     mp[x]=y;
    // }
    // for(auto it : mp)
    // {
    //     cout<<it.first<<" "<<it.second<<" "<<endl;
    // }


    // auto it=mp.lower_bound(9);
    // cout<<it->first<<" "<<it->second<<endl;


    // Upper Bound :give strictly greater element based on key 

    // map<int,int>mp;
    // for (int i = 0; i <n; i++)
    // {
    //     int x,y;
    //     cin>>x>>y;
    //     mp[x]=y;
    // }
    // for(auto it : mp)
    // {
    //     cout<<it.first<<" "<<it.second<<" "<<endl;
    // }


    // auto it=mp.upper_bound(6);
    // cout<<it->first<<" "<<it->second<<endl;

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