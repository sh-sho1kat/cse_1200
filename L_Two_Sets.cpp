//                        بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ
//                                                وَقُل رَّبِّ زِدْنِي عِلْمًا
//   رَبِّ اشْرَحْ لِي صَدْرِي وَيَسِّرْ لِي أَمْرِي وَاحْلُلْ عُقْدَةً مِنْ لِسَانِي يَفْقَهُوا قَوْلِي
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
    ll t;
    // cin >> t;
    // while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true;
        ll n;
        cin >> n;
        sum = (n * (n + 1)) / 2;
        vl v1, v2;
        if (sum & 1)
            no;
        else
        {
            sum /= 2;
            ll s = 0;
            for (ll i = n; i >= 1; i--)
            {
                if ((s + i) <= sum)
                {
                    v1.eb(i);
                    s += i;
                }
                else
                {
                    v2.eb(i);
                }
            }
            yes;
            cout << v1.size() << nl;
            ap(v1, v1.size());
            cout << v2.size() << nl;
            ap(v2, v2.size());
        }
    }
    return SH;
}