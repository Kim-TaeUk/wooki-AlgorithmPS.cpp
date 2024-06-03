#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    stack<int> st;

    while (N--) {
        string op;
        cin >> op;
        if (op == "push") {
            int x;
            cin >> x;
            st.push(x);
        } else if (op == "pop") {
            if (st.empty()) {
                cout << -1 << "\n";
            } else {
                cout << st.top() << "\n";
                st.pop();
            }
        } else if (op == "size") {
            cout << st.size() << "\n";
        } else if (op == "empty") {
            if (st.empty()) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else if (op == "top") {
            if (st.empty()) {
                cout << -1 << "\n";
            } else {
                cout << st.top() << "\n";
            }
        }
    }
}
