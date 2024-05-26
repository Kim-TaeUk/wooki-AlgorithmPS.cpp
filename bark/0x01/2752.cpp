#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    int mx, mn, mid;
    mx = max({a, b, c});
    mn = min({a, b, c});
    mid = a + b + c - mx - mn;
    cout << mn << ' ' << mid << ' ' << mx;
}
