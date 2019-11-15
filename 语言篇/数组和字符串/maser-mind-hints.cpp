#include<stdio.h>

#define maxn 1010
/**
 *实现一个经典"猜数字"游戏。给定答案序列和用户猜的序列，统计有多少数字位置正确
 *（A），有多少数字在两个序列都出现过但位置不对（B）
 */
int main() {
	int n, a[maxn], b[maxn]; //定义序列长度n, 答案序列数组以及预测序列数组a[maxn], b[maxn] 
	int kase = 0; //定义游戏次序
	while(scanf("%d", &n) == 1 && n) { //n=0时输入结束，不为零则一直输入 
		printf("Game %d:\n", ++kase);
		for(int i = 0; i < n; i++) { //输入答案序列 
			scanf("%d", &a[i]);
		}
		for(;;) {
			int A = 0, B = 0; // A是预测正确的个数，B是除了预测正确的之外的同时拥有的数字的个数 
			for (int i = 0; i < n; i++) {
				scanf("%d", &b[i]);	//不断输入预测序列
				if(a[i]==b[i]) {
					A++;	// 如果预测序列中的数和答案中的一样，则计数器A加1 
				}
			}
			if(b[0] == 0){
				break; //如果预测序列输入为0，则退出 
			}
			for(int d = 1; d <= 9; d++) {
				int c1 = 0, c2 = 0; //统计数字d在答案序列和猜测序列中出现了几次
				for(int i = 0; i < n; i++) {
					if(a[i] == d) {
						c1++;
					}
					if(b[i] == d) {
						c2++;
					}
				}
				if(c1 < c2) {  //取两个序列里面都包含的数字的个数较少的那一个 
					B += c1;  
				} else {
					B += c2;
				}
			}
			printf("	(%d,%d)\n", A, B-A);	//输出预测序列正确的个数，和 
		}
	}
	return 0; 
} 
