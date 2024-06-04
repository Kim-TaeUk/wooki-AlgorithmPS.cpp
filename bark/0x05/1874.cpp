#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> st;
    string res;
    int cnt = 1;

    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        while (cnt <= x) {
            st.push(cnt);
            cnt++;
            res += "+\n";
        }
        if (st.top() != x) {
            cout << "NO\n";
            return 0;
        }
        st.pop();
        res += "-\n";
    }
    cout << res;
}
