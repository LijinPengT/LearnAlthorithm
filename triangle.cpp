#include<stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	if (n > 20) {
		printf("num is big!");
	} else {
		for(int i = 0; i < n; i++) {
			for(int j = 1; j <= i; j++) {
				printf(" ");
			}
			for(int k = 1; k <= (n-i-1)*2+1; k++) {
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}
