/**
 * ����Ԫ��DigiterGenerator 
 * ���x����x�ĸ�������֮�͵õ�y����˵x��y������Ԫ������n��1��n��100000��������С
 * ����Ԫ���޽����0�����磬n=216��121��2005ʱ�Ľ�ֱ�Ϊ198��0��1979.
 */
 
// ˼·��һ����ö�����е�������m����ǡ�m����m�ĸ�������֮�͵õ�������һ������Ԫ��m��
// ����� 
#include<stdio.h>
#include<string.h>
#define maxn 100005

int ans[maxn]; 

int main() {
	int T, n;
	memset(ans, 0, sizeof(ans)); //��ans[maxn]��ʼ��Ϊ0���� 
	for(int m = 0; m < maxn; m++) { //ö�����е�������m�������m��������֮�� 
		int x = m, y = m;
		while(x > 0) { //��m��m�ĸ������ּ���������y 
			y += x % 10;
			x /= 10;
		}
		if(ans[y] == 0 || m < ans[y]) {  // ���y������ֶ�Ӧ��mֵΪ0������mС��ans[y];����ans[y] = m;  
			ans[y] = m;
		}
	}  //ö�ٽ��� 
	scanf("%d", &T);
	while(T--) {
		scanf("%d", &n);
		printf("%d\n", ans[n]); // ��Ӧn�����в���� 
	}
	return 0;
} 
