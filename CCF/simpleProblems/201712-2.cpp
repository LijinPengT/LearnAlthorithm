#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    queue<int>q;
    for(int i = 1; i <= n; i++) {
        q.push(i);
    }
    int num = 1;
    while (q.size() > 1)
    {
        int t = q.front();
        q.pop();
        if(!(num%k == 0 || num % 10 == k)){
            q.push(t);
        }
        ++num;
    }
    printf("%d", q.front());
    return 0;
}