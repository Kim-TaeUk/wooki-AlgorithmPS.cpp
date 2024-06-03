#include <bits/stdc++.h>

using namespace std;

int main(void) {
    stack<int> st;

    st.push(10);    // 10
    st.push(20);    // 10 20
    st.push(30);    // 10 20 30

    cout << st.size() << "\n";  //3

    if (st.empty()) {
        cout << "stack is empty\n";
    } else {
        cout << "stack is not empty\n"; // stack is not empty
    }

    st.pop();   // 10 20
    cout << st.top() << "\n";   // 20

    st.pop();   // 10
    cout << st.top() << "\n";   // 10

    st.pop();   // empty

    if (st.empty()) {
        cout << "stack is empty\n"; // stack is empty
    }

//    cout << st.top() << "\n";   // runtime error 발생
}
