/**
 * CF 282A: Bit++
 * We have to calulate the final value as ++ means adding 1 and -- means subtracting 1 from current state.
 * Check the string for + or - and increase/decrease the value.
 * in the sample input ++x can be checked using str[1]='+' else '-'
 */

/**
 * Required operation. string
 */

#include <iostream>
#include <string>

using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    int num=0;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        if(str[1]=='+') {
            num++;
        } else {
            num--;
        }
    }
    cout << num << "\n";
    return 0;
}
