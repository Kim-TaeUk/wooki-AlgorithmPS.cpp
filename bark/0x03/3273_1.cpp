#include <bits/stdc++.h>

using namespace std;

bool arr[2000001];
int n, x, res, tmp;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        arr[tmp] = true;
    }
    cin >> x;

    for (int i = 0; i < (x + 1) / 2; i++) {
        if (arr[i] && arr[x - i]) {
            res++;
        }
    }
    cout << res;
}
