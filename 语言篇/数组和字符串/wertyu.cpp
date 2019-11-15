#include<stdio.h>
// 善用常量数组，简化代码 
char s[] = "`123456789-=QWERTYUIOP[]\\ASDFGHJKL;'ZXXCVBNM,./";

int main() {
	int i, c;
	while((c = getchar()) != EOF) {
		for(i = 1; s[i] && s[i] != c; i++){}
			if(s[i]){
				putchar(s[i-1]);
			} else {
				putchar(c);
			}
	}
	return 0;
}
