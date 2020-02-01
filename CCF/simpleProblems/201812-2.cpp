#include <bits/stdc++.h>

using namespace std;

int main() {
    long long light[3], N, a, b, ans = 0;
    cin >> light[0] >> light[2] >> light[1] >> N;
    long long sum = light[0] + light[1] + light[2];
    for(int i = 0; i < N; i++) {
        cin >> a >> b;
        if(a == 0)
            ans += b;
        else {
            if(a == 1) {
                a = 0;
            } else if (a == 3) {
                a = 1;
            }
            b = (light[a] - b + ans) % sum;
            while(b > light[a]) {
                b -= light[a];
                a = (a + 1) % 3;
            }
            if(a == 0) {
                ans += light[a] - b;
            } else if (a == 2) {
                ans += light[a] - b + light[0];
            }
        }
    }
    cout << ans;
    return 0;
}