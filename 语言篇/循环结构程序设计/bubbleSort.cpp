#include<iostream>

using namespace std;

int bubbleSort(int A[], int N) {
	bool flag = 1;
	int sw = 0;
	for(int i = 0; flag ; i++) {
		flag = 0;
		for(int j = N - 1; j > 0; j--) {
			if(A[j] < A[j-1]) {
				swap(A[j], A[j-1]);
				flag = 1;
				sw++;
			}
		}
	}
	return sw;
}

int main() {
	int N, A[105], i;
	cin>>N;
	for(i = 0; i < N; i++) {
		cin>>A[i];
	}
	int sw = 0;
	sw = bubbleSort(A, N);
	cout<<sw<<endl;
	for(int j = 0; j < N; j++) {
		if(j) cout<<" ";
		cout<<A[j];
	}
	cout<<endl;
	return 0;
} 
