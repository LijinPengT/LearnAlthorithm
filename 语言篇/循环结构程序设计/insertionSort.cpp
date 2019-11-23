#include<iostream>
using namespace std;
#define maxn 105
int main() {
	int n = 0;
	cin>>n;
	int a[maxn];
	for(int i = 0; i < n; i++) {
		cin>>a[i];
	}
	for(int i = 1; i < n;i++){
		int v = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > v) {
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = v;
		for(int k = 0; k < n; k++) {
			cout<<a[k];
		}
		cout<<endl;
	}
}
	

