#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

#ifdef LOCAL
#define dbg(x...) cerr << "\033[1;31m[" << #x << "] = ["; _print(x); cerr << "\033[0m\n";
#define time_taken cerr << "\033[1;32mTime: " << (double)clock() / CLOCKS_PER_SEC << "s\033[0m\n";
#else
#define dbg(x...)
#define time_taken
#endif


void _print() { cerr << "]"; }
template <typename T, typename... V> void _print(T t, V... v);
template <typename T> void _print(T x) { cerr << x; }
template <typename T, typename U> void _print(pair<T, U> p) { cerr << "{" << p.first << ", " << p.second << "}"; }
template <typename T> void _print(vector<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <typename T> void _print(set<T> s) { cerr << "[ "; for (T i : s) { _print(i); cerr << " "; } cerr << "]"; }
template <typename T, typename U> void _print(map<T, U> m) { cerr << "[ "; for (auto i : m) { _print(i); cerr << " "; } cerr << "]"; }
template <typename T, typename... V> void _print(T t, V... v) { _print(t); if (sizeof...(v)) cerr << ", "; _print(v...); }


void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    dbg(n, a);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    time_taken;
    return 0;
}
