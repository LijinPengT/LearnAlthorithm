#include<stdio.h>
#include<string.h>
#include<ctype.h>

const char* rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";  // �����ַ��� 
const char* msg[] = {"not a palindrome", "a regular palindrome", "a mirrored string", "a mirrored palindrom"}; // ������Ϣ�б� 

char r(char ch) {
	if(isalpha(ch)) { //isalpha()�ж��ַ��Ƿ�Ϊ��ĸ �� ���ƵĻ���isdigit, isprint,toupper,tolow����ת����Сд 
		return rev[ch - 'A']; // �������ĸ�򷵻ظ���ĸ��Ӧ����� 
	}
	return rev[ch - '0' + 25]; // �����������ch-'0'���Ǹ����ֱ��� 
}

int main() {
	char s[30];
	while(scanf("%s", s) == 1) {
		int len = strlen(s);
		int p = 1, m = 1;
		for(int i = 0; i < (len+1)/2; i++) {
			if(s[i] != s[len-1-i]) p=0;
			if(r(s[i]) != s[len-1-i]) m=0;
		}
		printf("%s -- is %s. \n\n", s, msg[m*2+p]);
	}
	return 0;
}
 
