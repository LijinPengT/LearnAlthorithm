/**
 * 生成元，DigiterGenerator 
 * 如果x加上x的各个数字之和得到y，就说x是y的生成元。给出n（1≤n≤100000），求最小
 * 生成元。无解输出0。例如，n=216，121，2005时的解分别为198，0，1979.
 */
 
// 思路：一次性枚举所有的正整数m，标记“m加上m的各个数字之和得到的数有一个生成元是m”
// 最后查表 
#include<stdio.h>
#include<string.h>
#define maxn 100005

int ans[maxn]; 

int main() {
	int T, n;
	memset(ans, 0, sizeof(ans)); //将ans[maxn]初始化为0数组 
	for(int m = 0; m < maxn; m++) { //枚举所有的正整数m，并标记m各个数字之和 
		int x = m, y = m;
		while(x > 0) { //将m和m的各个数字加起来等于y 
			y += x % 10;
			x /= 10;
		}
		if(ans[y] == 0 || m < ans[y]) {  // 如果y这个数字对应的m值为0，或者m小于ans[y];则让ans[y] = m;  
			ans[y] = m;
		}
	}  //枚举结束 
	scanf("%d", &T);
	while(T--) {
		scanf("%d", &n);
		printf("%d\n", ans[n]); // 对应n，进行查表即可 
	}
	return 0;
} 
