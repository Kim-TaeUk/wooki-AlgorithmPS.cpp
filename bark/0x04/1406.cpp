#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;
    list<char> lst;
    for (char c: str) {
        lst.push_back(c);
    }
    auto cursor = lst.end();
    int N;
    cin >> N;
    while (N--) {
        char op;
        cin >> op;
        if (op == 'P') {
            char c;
            cin >> c;
            lst.insert(cursor, c);
        } else if (op == 'L') {
            if (cursor != lst.begin()) {
                cursor--;
            }
        } else if (op == 'D') {
            if (cursor != lst.end()) {
                cursor++;
            }
        } else if (op == 'B') {
            if (cursor != lst.begin()) {
                cursor--;
                cursor = lst.erase(cursor);
            }
        }
    }

    for (char c: lst) {
        cout << c;
    }
}
