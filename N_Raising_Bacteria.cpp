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
    ll n;
    cin >> n;
    // ll fact = 1;
    // bool flag = true;
    // while (fact <= n)
    // {
    //     fact *= 2;
    //     if (fact * 2 > n)
    //         break;
    // }
    // cout << n - fact + 1 << nl;
    ll ans = 0;
    while (n >= 1)
    {
        if (n & 1)
        {
            ans++;
            n--;
        }
        n /= 2;
    }
    cout << ans << nl;
    return SH;
}