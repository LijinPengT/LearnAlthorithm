#include <bits/stdc++.h>

using namespace std;

struct Key {
    int num;
    int time;
    bool borrow;
    Key(int n, int t, bool b) : num(n), time(t), borrow(b) {}
    bool operator < (const Key& k)const {
        if(this->time!=k.time)
            return this->time > k.time;
        else if(this->borrow != k.borrow)
            return this->borrow && !k.borrow;
        else 
            return this->num > k.num;
    }
};
priority_queue<Key> pq;

int main() {
    int K, N, w, s, c;
    scanf("%d %d", &N, &K);
    int a[N+1];
    for(int i = 0; i < N + 1; i++) {
        a[i] = i;
    }
    for(int i = 0; i < K; i++) {
        scanf("%d %d %d", &w, &s, &c);
        pq.push(Key(w,s,true));
        pq.push(Key(w,s+c,false));
    }
    while(!pq.empty()) {
        Key k = pq.top();
        pq.pop();
        if(k.borrow) {
            int i = 1;
            while(a[i] != k.num)
                ++i;
            a[i] = -1;
        } else {
            int i = 1;
            while (a[i] != -1)
            {
                ++i;
            }
            a[i] = k.num;
        }
    }
    for(int i = 1; i < N+1; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}