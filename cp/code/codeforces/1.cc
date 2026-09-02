/**
 * @author Adal Khan
 * 02/09/2026
 * Water Melon
 * Topic: Brute force method, Mathematics
 *
 * Note: Every time start with a lowest test case eg = 1
 * Condition 1: if weigh is = 2, then the water melon cannot be divided into even number as 2 = 1+1 ***
 * Condition 2: If weigh is > 2 we can execute the rest of the code
 */

#include <iostream>

using namespace std;


int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);
    int w;
    cin >> w;

    if(w > 2 && w%2==0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
