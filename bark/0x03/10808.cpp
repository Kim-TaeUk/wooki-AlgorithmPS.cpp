#include <bits/stdc++.h>

using namespace std;

int freq[26];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;

    for (char c: str) {
        freq[c - 'a']++;
    }

    for (int e: freq) {
        cout << e << " ";
    }
}
