#include<stdio.h>
#include<math.h>

int main() {
	for(int i = 100; i < 1000; i++) {
		int a = i / 100, b = (i - a*100) / 10, c = i - a*100 - b*10;
		int sum = a*100 + b*10 + c;
		if(sum == pow(a, 3) + pow(b, 3) + pow(c, 3)) {
			printf("%d\n", sum);
		} 
	}
	return 0;
}
