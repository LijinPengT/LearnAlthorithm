#include <bits/stdc++.h>

using namespace std;

int main() {
    int r, y, g, n, k, t, ans = 0;
    cin >> r >> y >> g >> n;
    for (int i = 0;i < n; i++){
        cin >> k >> t;
        if(k == 0 || k == 1)
            ans += t;
        else if (k == 2) 
            ans += t + r;
    }
    cout << ans << endl;
    return 0;
}