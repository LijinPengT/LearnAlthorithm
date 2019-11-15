#include<stdio.h>
#include<string.h>
#include<ctype.h>

const char* rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";  // 设置字符集 
const char* msg[] = {"not a palindrome", "a regular palindrome", "a mirrored string", "a mirrored palindrom"}; // 设置消息列表 

char r(char ch) {
	if(isalpha(ch)) { //isalpha()判断字符是否为字母 ， 类似的还有isdigit, isprint,toupper,tolow可以转换大小写 
		return rev[ch - 'A']; // 如果是字母则返回该字母对应的序号 
	}
	return rev[ch - '0' + 25]; // 如果是数字则ch-'0'就是该数字本身。 
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
 
