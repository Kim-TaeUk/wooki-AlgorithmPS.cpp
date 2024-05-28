#include <bits/stdc++.h>

using namespace std;

int arr[9], ans[9];
int total;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            total = 0;
            fill(ans, ans + 9, 0);
            for (int k = 0; k < 9; k++) {
                if (k != i && k != j) {
                    total += arr[k];
                    ans[k] = arr[k];
                }
            }
            if (total == 100) {
                break;
            }
        }
        if (total == 100) {
            break;
        }
    }

    sort(ans, ans + 9);
    for (int i = 2; i < 9; i++) {
        cout << ans[i] << "\n";
    }
}
