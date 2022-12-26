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

// ll power(ll a, ll b)
// {
//     if (b == 1)
//         return a;
//     if (b == 0)
//         return 1;
//     if (b & 1)
//         // return ((a * (power(a, b / 2) % mod) * (power(a, b / 2) % mod) % mod)) % mod;
//         return a * power(a, b / 2) * power(a, b / 2);
//     else
//         // return ((power(a, b / 2) % mod) * (power(a, b / 2) % mod) % mod);
//         power(a, b / 2) * power(a, b / 2);
// }

ll power(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

int main()
{
    fastio;
    ll t;
    t = 1;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true;
        ll m, n;
        cin >> m >> n;
        ll fact = power(m, n);
        cout << fact << nl;
    }
    return SH;
}