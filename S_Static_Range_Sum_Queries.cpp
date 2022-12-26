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
    ll n, q;
    cin >> n >> q;
    ll a[n + 5];
    a[0] = 0;
    fr(1, n + 1)
    {
        ll p;
        cin >> p;
        a[i] = a[i - 1] + p;
    }
    // fr(0, n + 1) cout << a[i] << " ";
    // cout << nl;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        cout << a[r] - a[l - 1] << nl;
    }
    return SH;
}