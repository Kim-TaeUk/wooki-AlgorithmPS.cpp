#include <bits/stdc++.h>

using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> vector(21);
    int start, end;
    for (int i = 0; i < 21; i++) {
        vector[i] = i;
    }

    for (int i = 0; i < 10; i++) {
        cin >> start >> end;
        reverse(vector.begin() + start, vector.begin() + end + 1);
    }

    for (int i = 1; i < 21; i++) {
        cout << vector[i] << " ";
    }
}
