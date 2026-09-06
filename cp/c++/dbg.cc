#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

void _print(int t) { cerr << t; }
void _print(long long t) { cerr << t; }
void _print(unsigned long long t) { cerr << t; }
void _print(string t) { cerr << '\"' << t << '\"'; }
void _print(char t) { cerr << '\'' << t << '\''; }
void _print(double t) { cerr << t; }
void _print(bool t) { cerr << (t ? "true" : "false"); }

template <typename T, typename V> void _print(pair <T, V> p);
template <typename T> void _print(vector <T> v);
template <typename T> void _print(set <T> v);
template <typename T, typename V> void _print(map <T, V> v);
template <typename T, typename V> void _print(pair <T, V> p) { cerr << "{"; _print(p.first); cerr << ", "; _print(p.second); cerr << "}"; }
template <typename T> void _print(vector <T> v) { cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]"; }
template <typename T> void _print(set <T> v) { cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]"; }
template <typename T, typename V> void _print(map <T, V> v) { cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]"; }

void _print_args() { cerr << "]"; }
template <typename T, typename... V> void _print_args(T t, V... v) {
    _print(t);
    if (sizeof...(v)) cerr << ", ";
    _print_args(v...);
}

#ifdef LOCAL
#define dbg(x...) cerr << "\033[1;31m[" << #x << "] = ["; _print_args(x); cerr << "\033[0m\n";
#define time_taken cerr << "\033[1;32mTime: " << (double)clock() / CLOCKS_PER_SEC << "s\033[0m\n";
#else
#define dbg(x...)
#define time_taken
#endif

void solve() {

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    time_taken;
    return 0;
}
