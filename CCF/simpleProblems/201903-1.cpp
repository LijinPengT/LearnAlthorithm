#include <iostream>
#include <cstdio>

using namespace std;

const int N = 1e5;
int a[N];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int min = a[0], max = a[n-1];
    if(min > max) swap(min, max);
    if(n % 2 == 1) {
        printf("%d %d %d\n", max, a[n/2], min);
    } else {
        if((a[n/2-1]+a[n/2])%2 == 1)
            printf("%d %.1lf %d\n", max, (double)((a[n/2-1]+a[n/2])/2.0), min);
        else
        {
            printf("%d %d %d\n", max,(a[n/2-1]+a[n/2])/2, min);
        }
    }
    return 0;    

}
