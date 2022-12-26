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
    string s1, s2;
    cin >> s1 >> s2;
    for (ll i = 0; i < s1.size(); i++)
        s1[i] = tolower(s1[i]);
    for (ll i = 0; i < s2.size(); i++)
        s2[i] = tolower(s2[i]);
    // cout << s1 << nl;
    // cout << s2 << nl;
    if (s1 == s2)
    {
        cout << 0 << nl;
    }
    else if (s1 < s2)
    {
        cout << -1 << nl;
    }
    else
        cout
            << 1 << nl;

    return SH;
}