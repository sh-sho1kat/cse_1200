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
    ll n, m;
    cin >> n >> m;
    ll a[n + 5];
    fr(0, n) cin >> a[i];
    sort(a, a + n);
    vector<pair<ll, string>> vp;
    vector<pair<ll, ll>> arr;
    for (ll i = 0; i < m; i++)
    {
        ll a, b;
        cin >> a >> b;
        arr.push_back({a, b});
        vp.push_back({a, "in"});
        vp.push_back({b, "out"});
    }
    sort(all(vp));
    // for (auto u : vp)
    // {
    //     cout << u.ff << " " << u.ss << nl;
    // }
    ll tt = 0;
    ll tr = 0;
    map<ll, ll> maap;
    for (ll i = 1; i <= n; i++)
    {
        if (vp[tt].first == i)
        {

            if (vp[tt].second == "in")
            {
                tr++;
                maap[i] = tr;
            }
            if (vp[tt].second == "out")
            {
                if (vp[tt].first != vp[tt - 1].first)
                    maap[i] = tr;
                tr--;
            }
            tt++;
        }
        else
            maap[i] = tr;
        if (vp[tt].first == vp[tt - 1].first)
        {
            i--;
        }
    }
    // for (auto u : maap)
    // {
    //     cout << u.ff << " " << u.ss << nl;
    // }
    vector<pair<ll, ll>> v;
    for (auto u : maap)
    {
        v.push_back({u.ss, u.ff});
    }
    sort(v.begin(), v.end());
    ll newa[n + 5];
    ll i = 0;
    for (auto u : v)
    {
        // cout << u.ff << " " << u.ss << nl;
        newa[u.ss] = a[i];
        i++;
    }
    newa[0] = 0;

    for (ll i = 1; i <= n; i++)
    {
        newa[i] = newa[i - 1] + newa[i];
    }
    // for (ll i = 0; i <= n; i++)
    // {
    //     cout << newa[i] << " ";
    // }
    ll sum = 0;
    for (ll i = 0; i < m; i++)
    {
        sum += newa[arr[i].second] - newa[arr[i].first - 1];
    }
    cout << sum << nl;
    return SH;
}