#include <bits/stdc++.h>

using namespace std;

int digit[10];
int res;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    while (N) {
        digit[N % 10]++;
        N /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (i == 6 || i == 9) {
            continue;
        }
        res = max(res, digit[i]);
    }

    res = max(res, (digit[6] + digit[9] + 1) / 2);
    cout << res;
}
