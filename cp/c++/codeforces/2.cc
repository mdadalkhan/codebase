/**
 * Way to Long word
 * Type: String
 * Condition 1: if string length is >= 10  >>>> Print 1st Char + Len -2 + Last Char
 *              No change Otherwise
 */

#include <bits/stdc++.h>
using namespace std;

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


int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int Case;
    cin >> Case;
    while(Case--) {
        string str;
        cin >> str;
        if(str.length() > 10) {
            cout << str[0] << str.length()-2 << str[str.length()-1] << "\n";
        } else {
            cout << str << "\n";
        }
    }

}
