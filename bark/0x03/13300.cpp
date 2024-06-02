#include <bits/stdc++.h>

using namespace std;

int arr[2][7];
int res;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K, S, Y;
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> S >> Y;
        arr[S][Y]++;
    }

    for (int sex = 0; sex < 2; sex++) {
        for (int year = 1; year < 7; year++) {
            res += arr[sex][year] / K;
            if (arr[sex][year] % K) {
                res++;
            }
        }
    }
    cout << res;
}
