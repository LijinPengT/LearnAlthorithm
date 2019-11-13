#include<stdio.h>
#include<string.h>
/**
 * 由于字符串的本质是数组，它也不是“一等公民”，只能用strcpy(a, b), strcmp(a, b), strcat(a, b)
 * 来执行“赋值”、“比较”和“连接”操作，而不能用“=”、“==”、 “<=”、“+”等运算符
 **/ 
int main() {
	int count = 0;
	char s[20], buf[99];
	scanf("%s", s);
	for (int abc = 111; abc <= 999; abc++) {
		for(int de =11; de <= 99; de++) {
			int x = abc*(de%10), y = abc*(de/10), z= abc*de;
			sprintf(buf, "%d%d%d%d%d", abc, de, x, y, z); //sprintf输出到字符串，保存字符串需要字符个数加1的空间，因为c语言的字符串是空字符\0结尾的。 
			int ok = 1;
			for (int i = 0; i < strlen(buf); i++) {	//strlen()是获取字符串s的实际长度 
				if(strchr(s, buf[i]) == NULL) ok = 0; // strchr是在一个字符串中查找单个字符 
			}
			if(ok) {
			printf("<%d>\n", ++count);
			printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", abc, de, x, y, z);
			}	
		}
	}
	printf("The number of solutions = %d\n", count);
	return 0;
} 
