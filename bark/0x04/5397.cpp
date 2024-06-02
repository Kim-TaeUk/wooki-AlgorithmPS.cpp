#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        list<char> lst = {};
        auto cursor = lst.end();
        string str;
        cin >> str;
        for (char c: str) {
            if (c == '<') {
                if (cursor != lst.begin()) {
                    cursor--;
                }
            } else if (c == '>') {
                if (cursor != lst.end()) {
                    cursor++;
                }
            } else if (c == '-') {
                if (cursor != lst.begin()) {
                    cursor--;
                    cursor = lst.erase(cursor);
                }
            } else {
                lst.insert(cursor, c);
            }
        }
        for (char c: lst) {
            cout << c;
        }
        cout << "\n";
    }
}
