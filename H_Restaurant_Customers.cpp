//                        بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define mp make_pair
#define ff first
#define ss second
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

#define ok cout << "Eureka" << nl
#define ap(arr, n)             \
    for (ll i = 0; i < n; i++) \
        cout << arr[i] << " "; \
    cout << nl;

int main()
{
    fastio;
    // ll t;
    // cin>>t;
    // while(t--)
    // {
    //     ll sum=0,tmp=0,res=0,cnt=0,count=0,ans=0;
    //     bool flag=true;

    // }
    ll n;
    cin >> n;
    vector<pair<ll, string>> v;
    // for (ll i = 0; i < n; i++)
    // {
    //     ll a, b;
    //     cin >> a >> b;
    //     v.push_back({a, b});
    // }

    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v.push_back({a, "in"});
        v.push_back({b, "out"});
    }

    sort(v.begin(), v.end());
    // for (auto u : v)
    //     cout << u.first << " " << u.second << nl;
    ll ans = 0;
    map<ll, ll> maap;
    // for (ll i = 0; i < n; i++)
    // {
    //     maap[v[i].second] = i + 1;
    // }
    ll p = 0;
    ll mx = 0;
    // for (ll i = 0; i < n; i++)
    // {
    //     if (v[i].first < v[p].second)
    //     {
    //         ans++;
    //     }
    //     else
    //     {
    //         mx = max(ans, mx);
    //         ans--;
    //         p++;
    //         i--;
    //     }
    // }
    // ll tmp = 0;
    // for (ll i = 0; i < n; i++)
    // {
    //     tmp = v[i].first;
    //     ans++;
    //     if (v[p].second < tmp)
    //     {
    //         ans--;
    //         mx = max(ans, mx);
    //         p++;
    //         // i--;
    //     }
    // }
    // cout << mx << nl;
    for (auto u : v)
    {
        mx = max(ans, mx);
        if (u.ss == "in")
        {
            ans++;
        }
        if (u.ss == "out")
        {
            ans--;
        }
    }
    cout << mx << nl;

    return SH;
}