#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, N[1005];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> N[i];
    }
    cout << ( N[0] + N[1] ) / 2;
    for(int i = 1; i < n-1; i++) {
        cout << " " << (N[i-1] + N[i] + N[i+1]) / 3;
    }
    cout << " " << (N[n-1] + N[n-2]) / 2;
    return 0;
}