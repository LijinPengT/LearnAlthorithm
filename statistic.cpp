// @v2 #define LOCAL
#include<stdio.h>
//#include<time.h>

// @v2 #define INF 1000000000
#define INF 1000000000
int main() {
// @v1 statistic.1
//	int a[9];
//	for(int i = 0; i < 8; i++) {
//		scanf("%d", &a[i]);
//	}
//	int sum = 0;
//	int max=a[0], min= a[0];
//	double aver = 0.0;
//	for(int j = 0; j < 8; j++) {
//		if(max < a[j]) {
//			max = a[j];
//		}
//		if(min > a[j]) {
//			min > a[j];
//		}
//		sum += a[j];
//	}
//	aver = sum / 8.0;
//	printf("%d %d %.3f\n", max, min, aver);

// @v2 statistic.2
//#ifdef LOCAL
//	freopen("data.in", "r", stdin);
//	freopen("data.out", "w", stdout);
//#endif
//	int x, n = 0, min = INF, max = -INF, s = 0;
//	while(scanf("%d", &x) == 1) {
//		s += x;
//		if(x < min) {
//			min = x;
//		}
//		if(x > max) {
//			max = x;
//		}
//		// printf("x= %d, min= %d, max= %d\n", x, min, max);
//		n++;
//	}
//	printf("%d %d %.3f\n", min, max, (double)s/n);
	FILE *fin, *fout;
	fin = fopen("data.in", "rb");
	fout = fopen("data.out", "wb");
	int x, n = 0, min = INF, max = -INF, s = 0;
	while(fscanf(fin, "%d", &x) == 1) {
		s += x;
		if(x < min) min = x;
		if(x > max) max = x;
		n++;
	}
	fprintf(fout, "%d %d %.3f\n", min, max, (double)s/n);
	fclose(fin);
	fclose(fout);
//	printf("Time used = %.2f\n", (double)clock() / CLOCKS_PER_SEC);
	return 0; 
}
