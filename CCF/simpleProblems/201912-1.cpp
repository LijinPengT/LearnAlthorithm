#include <bits/stdc++.h>
using namespace std;
bool contains7(int n) {
    for (; n != 0; n /= 10)
        if (n % 10 == 7)
            return true;
    return false;
}
int main() {
    int n;
    cin >> n;
    array<int, 4> ans{};
    for (int i = 1; n > 0; ++i) {
        if (i % 7 != 0 and not contains7(i)) {
            --n;
        } else {
            ++ans[(i - 1) % 4];
        }
    }
    for (int i : ans)
        cout << i << "\n";
    return 0;
}