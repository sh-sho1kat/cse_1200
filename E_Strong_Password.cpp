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
    string s;
    cin >> s;
    string p;

    ll uc = 0, lc = 0, num = 0, spc = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            uc++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            lc++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            num++;
        }
        else
            spc++;
    }
    ll ans = 0;
    if (uc == 0)
        ans++;
    if (lc == 0)
        ans++;
    if (num == 0)
        ans++;
    if (spc == 0)
        ans++;

    if (ans + s.size() >= 6)
    {
        cout << ans;
    }
    else
        cout << 6 - s.size() << nl;

    return SH;
}