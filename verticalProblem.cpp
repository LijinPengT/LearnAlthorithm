#include<stdio.h>
#include<string.h>
/**
 * �����ַ����ı��������飬��Ҳ���ǡ�һ�ȹ��񡱣�ֻ����strcpy(a, b), strcmp(a, b), strcat(a, b)
 * ��ִ�С���ֵ�������Ƚϡ��͡����ӡ��������������á�=������==���� ��<=������+���������
 **/ 
int main() {
	int count = 0;
	char s[20], buf[99];
	scanf("%s", s);
	for (int abc = 111; abc <= 999; abc++) {
		for(int de =11; de <= 99; de++) {
			int x = abc*(de%10), y = abc*(de/10), z= abc*de;
			sprintf(buf, "%d%d%d%d%d", abc, de, x, y, z); //sprintf������ַ����������ַ�����Ҫ�ַ�������1�Ŀռ䣬��Ϊc���Ե��ַ����ǿ��ַ�\0��β�ġ� 
			int ok = 1;
			for (int i = 0; i < strlen(buf); i++) {	//strlen()�ǻ�ȡ�ַ���s��ʵ�ʳ��� 
				if(strchr(s, buf[i]) == NULL) ok = 0; // strchr����һ���ַ����в��ҵ����ַ� 
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
