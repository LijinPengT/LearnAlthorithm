#include <iostream>
#include <cstdio>

using namespace std;

#define N 1000
int flag[N];

int main() {
    int n, m, a, i, j;
    int t = 0, d = 0, e = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int sum = 0;
        scanf("%d", &m);
        scanf("%d", &sum);
        flag[i] = 0;
        for(j = 2; j <= m; j++) {
            scanf("%d", &a);
            if(a <= 0) sum += a;
            else if(a < sum) {
                flag[i] = 1;
                sum = a;
            }
        }
        t += sum;
        if(flag[i]) d++;
    }
    if(n >= 3)
        for(i = 0; i < n; i++) 
            if(flag[(i-1+n)%n]&&flag[i]&&flag[(i+1)%n]) e++;
    printf("%d %d %d\n", t, d, e);
    return 0;
}