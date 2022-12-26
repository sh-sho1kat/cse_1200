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

void lowercase(string s)
{
}

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
    string p;
    cin >> p;
    for (ll i = 0; i < p.size(); i++)
        p[i] = tolower(p[i]);
    // cout << p << nl;
    ll cnt = 0;
    while (1)
    {
        string s;
        cin >> s;

        if (s == "END_OF_TEXT")
            break;
        for (ll i = 0; i < s.size(); i++)
            s[i] = tolower(s[i]);
        // cout << s << " ";
        if (s == p)
            cnt++;
    }
    cout << cnt << nl;
    return SH;
}