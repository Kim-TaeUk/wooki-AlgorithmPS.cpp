#include <bits/stdc++.h>

using namespace std;

int input;
int mn = 100;
int sum = 0;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 7; i++) {
        cin >> input;
        if (input % 2 != 0) {
            sum += input;
            if (input < mn) {
                mn = input;
            }
        }
    }

    if (sum == 0) {
        cout << -1;
    } else {
        cout << sum << '\n' << mn;
    }
}
