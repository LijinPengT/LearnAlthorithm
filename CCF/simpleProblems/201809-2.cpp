#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    vector<pair<int, int>>v1(n), v2(n);
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &v1[i].first, &v1[i].second);
    }
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &v2[i].first, &v2[i].second);
    }
    for(pair<int, int>p1 : v1) {
        for(pair<int, int>p2 : v2) {
            if(p1.first <= p2.second && p1.second >= p2.first)
                ans += min(p1.second, p2.second) - max(p1.first, p2.first);
        }
    }
    printf("%d", ans);
    return 0;
}