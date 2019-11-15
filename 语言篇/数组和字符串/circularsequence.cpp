/** 
 * ��״���У�Circular Sequence, ACM/ICPC Seoul 2004, UVa1584��
 * ����Ϊn�Ļ�״����n�ֱ�ʾ�����ֱ�Ϊ��ĳ
 * ��λ�ÿ�ʼ˳ʱ��õ�
 * ����һ������Ϊn��n��100���Ļ�״DNA����ֻ����A��C��G��T��4���ַ�����һ�ֱ�
 * ʾ�����������������û�״������С��ʾ 
 */

// ��"��n��Ԫ���е���Сֵ"һ�����ñ���ans��ʾĿǰΪֹ��
// �ֵ�����С�������봮�е���ʼλ�ã�Ȼ�󲻶ϸ���ans�� 
#include<stdio.h>
#include<string.h>
#define maxn 105

// ��״��s�ı�ʾ��p�Ƿ�ȱ�ʾ��q���ֵ���С
int less(const char* s, int p, int q) {
	int n = strlen(s);
	for(int i = 0; i < n; i++) {
		if(s[(p+i) % n] != s[(q+i) % n]) {
			return s[(p+i)%n] < s[(q+i)%n]; // p��qС 
		}
	}
	return 0; //��� 
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
			if(less(s, i, ans)) { //���i < ans,��ans=i, �ҵ���С��������λ�� 
				ans = i;
			}
		}
		for(int i = 0; i < n; i++) {
			putchar(s[(i+ans)%n]); //��ans�㿪ʼѭ������ַ��� 
		} 
		putchar('\n');
	}
	return 0;
} 























 

 
 

