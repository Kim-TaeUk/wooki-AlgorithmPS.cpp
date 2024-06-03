#include <bits/stdc++.h>

using namespace std;

int res = 0;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int K;
    cin >> K;
    stack<int> st;
    while (K--) {
        int x;
        cin >> x;
        if (x == 0) {
            st.pop();
        } else {
            st.push(x);
        }
    }

    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    cout << res;
}
