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
#define ap(arr, n)

int main()
{
    fastio;
    ll n;
    cin >> n;
    ll a[n + 5];
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll lgcd[n + 5];
    ll rgcd[n + 5];
    lgcd[0] = 0;
    rgcd[n + 1] = 0;

    for (ll i = 1; i <= n; i++)
    {
        lgcd[i] = __gcd(lgcd[i - 1], a[i]);
    }
    for (int i = n; i >= 1; i--)
    {
        rgcd[i] = __gcd(rgcd[i + 1], a[i]);
    }
    ll ans = 0;
    for (ll i = 0; i <= n - 1; i++)
    {
        ans = max(ans, __gcd(lgcd[i], rgcd[i + 2]));
    }
    cout << ans << nl;
    // cout << __gcd(0, 7) << nl;

    return SH;
}