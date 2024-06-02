#include <bits/stdc++.h>

using namespace std;

int freq[2][26], res;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str1, str2;
    cin >> str1 >> str2;

    for (char c: str1) {
        freq[0][c - 'a']++;
    }
    for (char c: str2) {
        freq[1][c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        res += abs(freq[0][i] - freq[1][i]);
    }
    cout << res;
}
