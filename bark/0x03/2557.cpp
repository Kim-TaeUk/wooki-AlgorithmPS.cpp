#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, B, C;
    cin >> A >> B >> C;

    int total = A * B * C;
    int digit[10] = {};

    while (total > 0) {
        digit[total % 10]++;
        total /= 10;
    }

    for (int e: digit) {
        cout << e << '\n';
    }
}
