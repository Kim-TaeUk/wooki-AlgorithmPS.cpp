#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    while (N--) {
        int freq[26] = {};
        string str1, str2;
        cin >> str1 >> str2;

        for (char c: str1) {
            freq[c - 'a']++;
        }
        for (char c: str2) {
            freq[c - 'a']--;
        }

        bool isPossible = true;
        for (int e: freq) {
            if (e != 0) {
                isPossible = false;
                break;
            }
        }
        
        if (isPossible) {
            cout << "Possible\n";
        } else {
            cout << "Impossible\n";
        }
    }
}
