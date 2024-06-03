#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    vector<int> josephus(N);
    iota(josephus.begin(), josephus.end(), 1);

    vector<int> res;
    int idx = 0;
    while (!josephus.empty()) {
        idx = (idx + K - 1) % josephus.size();
        res.push_back(josephus[idx]);
        josephus.erase(josephus.begin() + idx);
    }

    cout << "<";
    for (int i = 0; i < N; i++) {
        if (i == N - 1) {
            cout << res[i] << ">";
        } else {
            cout << res[i] << ", ";
        }
    }
}
