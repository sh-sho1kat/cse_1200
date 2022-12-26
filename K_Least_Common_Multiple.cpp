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
    ll a[n + 5];
    fr(0, n) cin >> a[i];
    ll gcd = a[0];
    ll tmp, lcmm;
    ll fact = 1;
    for (ll i = 2; i <= 1000; i++)
    {
        bool flag = true;
        bool f = false;
        for (ll j = 0; j < n; j++)
        {

            if (a[j] % i == 0 && a[j] != 1)
            {
                if (flag)
                    fact *= i;
                flag = false;
                a[j] = a[j] / i;
                if (a[j] % i == 0)
                    f = true;
            }
        }
        if (f)
            i--;
    }
    cout << fact << nl;
    return SH;
}