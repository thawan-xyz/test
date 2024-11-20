#include <bits/stdc++.h>
#define array vector
#define read cin
#define str string
#define write cout
#define endl '\n'
using namespace std; /*

# @author: Thawan Silva, 2024-08-14
# @problem: [14] - Name
# @url: https://github.com/thawan-xyz */

int main() {
    int t; read >> t;
    while (t--) {
        int n; read >> n;
        array<int> a(n);
        int s = 0;
        for (int &x : a) {
            read >> x;
            s ^= x;
        }
        int m = INT_MAX;
        for (int x : a) {
            m = min(m, x ^ s);
        }
        write << m << endl;
    }
    return 0;
}
