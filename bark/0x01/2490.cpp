#include <bits/stdc++.h>

using namespace std;

int res, input;
string ans = "DCBAE";

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 3; i++) {
        res = 0;
        for (int j = 0; j < 4; j++) {
            cin >> input;
            res += input;
        }
        cout << ans[res] << '\n';
    }
}
