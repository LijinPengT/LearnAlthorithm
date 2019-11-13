#include<stdio.h>
#include<time.h>
// factorial.1
//int main() {
//	int n, s = 0;
//	scanf("%d", &n);
//	for(int i = 1; i <= n; i++) {
//		int factorial = 1;
//		for(int j = 1; j <= i; j++) {
//			factorial *= j;
//		}
//		s += factorial;
//	}
//	printf("%d\n", s % 1000000);
//	return 0;
//}

// factorial.2
int main() {
	const int MOD = 1000000;
	int n, S = 0;
	scanf("%d", &n);
	if(n>25) {
		n=25;
	}
	for(int i = 1; i <= n; i++) {
		int factorial = 1;
		for(int j = 1; j <= i; j++) {
			factorial = (factorial * j % MOD);
		}
		S = (S + factorial) % MOD;
	}
	printf("%d\n",S);
	printf("Time used = %.2f\n", (double)clock() / CLOCKS_PER_SEC);
	return 0; 
}
