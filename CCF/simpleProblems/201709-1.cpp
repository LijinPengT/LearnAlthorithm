#include<bits/stdc++.h>

using namespace std;

int main() {
    int N, num = 0;
    scanf("%d", &N);
    int extra = N % 50 / 30 + N / 50 * 2;
    num = N / 10 + extra;
    printf("%d", num);
    return 0;
}