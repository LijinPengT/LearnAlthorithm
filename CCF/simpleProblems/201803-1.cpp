#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 1, ans = 0, num = 0;
    while(cin >> a && a != 0) {
        if(a == 1){
            ans += a;
            num = 0;
        } else if (a == 2) {
            ans += 2 * (++num);
        }
    }
    cout << ans;
    return 0;
}