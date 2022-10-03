//
// Created by sakost on 10.12.2019.
//

//#include <vector>
//#include <iostream>
//#include <map>
//#include <set>
//#include <algorithm>
//#include <limits>
//#include <cmath>
#include <bits/stdc++.h>

#pragma GCC optimize("O2")


using namespace std;

// definitions
typedef unsigned long long ull;
typedef long double ld;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ld, ld> pld;
typedef pair<ll, ll> pll;
typedef pair<ull, ull> pull;


//const ll p = 31;
const ll P = 1000000007;
const ld INFLD = numeric_limits<ld>::max();
const ll INFL = numeric_limits<ll>::max();
const int INF = numeric_limits<int>::max();
const ld eps = numeric_limits<ld>::epsilon();
const ld pi = 3.14159265358979323846264338327950288419716939937510;
const ld d2r = pi / 180;
const ld r2d = 180 / pi;

#define timeit clock_t _begin = clock();
#define endtimeit clock_t _end = clock(); cerr << "Elapsed seconds: " << double(_end - _begin) / CLOCKS_PER_SEC << endl;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fori(i, k, n) for(ll i(k); (i) < (n); ++(i))
#define forj(k, n) for(ull j(k); j < (n); ++j)
#define formi(n, k) for(ll i(n); i > (k); --i)
#define sz size()
#define forel(a) for(auto &el: (a))
#define srt(a) sort((a).begin(), (a).end())
#define rsrt(a) sort((a).begin(), (a).end(), greater<>())
//#define all(a) (a).begin(), (a).end()
#define bg begin()
#define fs first
#define sc second
#ifdef _ONPC_
#define what(x) cerr << #x << " = " << (x) << endl
#define VOLATILE volatile
#else
#define what(x)
#define VOLATILE
#endif

#define pow2(x) ((x) * (x))

map<ll, ll> factorize(ll n){
    ll k = 2;
    map<ll, ll> res;
    for(ll s(k); s*s <= n; ++s){
        while(n % s == 0){
            n /= s;
            res[s]++;
        }
    }
    if(n != 1){
        res[n]++;
    }
    return res;
}


void solve() {
    ll n, k;
    cin >> n >> k;

    auto fk = factorize(k);

    ll ans = INFL;

    for(auto &[key, val]: fk){
        ll res = 0;
        ll kk = key;
        while(n / kk > 0){
            res += n/ kk;
            kk *= key;
        }
        res /= val;
        ans = min(res, ans);
    }
    cout << ans << endl;
}



signed main() {
#ifdef _ONPC_
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#define TIMEIT
    timeit
#endif // _ONPC_

    fastIO;
    int t(1);
//    cin >> t; //////////////////////////////// UNCOMMENT IF WITH TESTS ///////////////////////////////////////
    fori(i, 0, t)solve();

#ifdef TIMEIT
    endtimeit
#endif // TIMEIT
    return 0;
}