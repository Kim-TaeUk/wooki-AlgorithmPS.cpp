#include <bits/stdc++.h>

using namespace std;

const int MX = 1000005;
int stck[MX];
int pos = 0;

void push(int x) {
    stck[pos++] = x;
}

void pop() {
    pos--;
}

int top() {
    return stck[pos - 1];
}

void test() {
    push(5);    // 5
    push(4);    // 5 4
    push(3);    // 5 4 3

    cout << top() << "\n";  // 3

    pop();  // 5 4
    pop();  // 5

    cout << top() << "\n";  // 5

    push(10);   // 5 10
    push(12);   // 5 10 12

    cout << top() << "\n";  // 12

    pop();  // 5 10

    cout << top() << "\n";  // 10
}

int main(void) {
    test();
}
