#include <iostream>

using namespace std;

#define maxn 200000
int main() {
    int n;
    cin>>n;
    int r[maxn];
    for(int i = 0;i < n;i++) {
        cin>>r[i];
    }
    int maxr = -20000000;
    int minr = r[0];
    
    for(int j = 1; j < n; j++) {
        if(r[j] - minr - maxr > 0) {
            maxr = r[j]-minr;
        }
        if(r[j] - minr < 0) {
            minr = r[j];
        }
    }
    cout << maxr <<endl;
}
