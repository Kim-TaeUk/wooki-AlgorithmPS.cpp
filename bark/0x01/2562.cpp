#include <bits/stdc++.h>

using namespace std;

int max_val, max_index;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tmp;
    for (int i = 0; i < 9; i++) {
        cin >> tmp;
        if (max_val < tmp) {
            max_val = tmp;
            max_index = i;
        }
    }
    cout << max_val << "\n" << max_index + 1;
}
