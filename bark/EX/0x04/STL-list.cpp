#include <bits/stdc++.h>

using namespace std;

int main(void) {
    list<int> lst = {1, 2};
//    list<int>::iterator it = lst.begin();
    auto it = lst.begin();   // it는 1을 가리킴

    lst.push_front(10); // 10 1 2
    cout << *it << "\n";

    lst.push_back(5);   // 10 1 2 5

    // it가 가리키는 곳 앞에 6을 삽입
    lst.insert(it, 6);   // 10 6 1 2 5

    it++;    // it를 그 다음 원소를 가리키도록, it는 2를 가리킴

    // it가 가리키는 값을 제거, 그 다음 원소인 5의 위치를 반환, it는 5
    it = lst.erase(it); // 10 6 1 5

    cout << *it << "\n"; // 5

    // C++11 이상부터 이렇게
    for (int e: lst) {
        cout << e << " ";
    }
    cout << "\n";

    // C++11 미만은 이렇게
    for (auto it = lst.begin(); it != lst.end(); it++) {
        cout << *it << " ";
    }
}
