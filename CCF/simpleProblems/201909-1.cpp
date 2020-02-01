#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int max = -1, max_id = -1, ans = 0;
    int temp;
    for (int i = 0; i < n; i++) {
        int drop = 0;
        for (int j = 0; j <= m; j++) {
            scanf("%d", &temp);
            ans += temp;
            if(j)
                drop -= temp;
        }
        if (drop > max) {
            max = drop;
            max_id = i + 1;
        }
    }
    printf("%d %d %d\n", ans, max_id, max);
    return 0;
}