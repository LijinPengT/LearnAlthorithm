/** 
 * 环状序列（Circular Sequence, ACM/ICPC Seoul 2004, UVa1584）
 * 长度为n的环状串有n种表示法，分别为从某
 * 个位置开始顺时针得到
 * 输入一个长度为n（n≤100）的环状DNA串（只包含A、C、G、T这4种字符）的一种表
 * 示法，你的任务是输出该环状串的最小表示 
 */

// 像"求n个元素中的最小值"一样，用变量ans表示目前为止，
// 字典序最小串在输入串中的起始位置，然后不断更新ans。 
#include<stdio.h>
#include<string.h>
#define maxn 105

// 环状串s的表示法p是否比表示法q的字典序小
int less(const char* s, int p, int q) {
	int n = strlen(s);
	for(int i = 0; i < n; i++) {
		if(s[(p+i) % n] != s[(q+i) % n]) {
			return s[(p+i)%n] < s[(q+i)%n]; // p比q小 
		}
	}
	return 0; //相等 
}

int main() {
	int T;
	char s[maxn];
	scanf("%d", &T);
	while(T--) {
		scanf("%s", s);
		int ans = 0;
		int n = strlen(s);
		for(int i = 0; i < n; i++) {
			if(less(s, i, ans)) { //如果i < ans,让ans=i, 找到最小串的输入位置 
				ans = i;
			}
		}
		for(int i = 0; i < n; i++) {
			putchar(s[(i+ans)%n]); //从ans点开始循环输出字符串 
		} 
		putchar('\n');
	}
	return 0;
} 























 

 
 

