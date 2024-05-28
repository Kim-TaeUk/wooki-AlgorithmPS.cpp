#include <bits/stdc++.h>

using namespace std;

int arr[10000], YS, MS;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++) {
        YS += (arr[i] / 30 + 1) * 10;
        MS += (arr[i] / 60 + 1) * 15;
    }

    if (YS < MS) {
        cout << "Y " << YS;
    } else if (YS > MS) {
        cout << "M " << MS;
    } else {
        cout << "Y M " << YS;
    }
}
