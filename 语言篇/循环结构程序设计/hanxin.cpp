/**
 * 韩信点兵，输入每种队形的排尾人数，输出总人数的最小值 
 * 
 */
 
/*
定理1 如a被n除所得的余数等b被n除所得的余数，c被n除所得的余数等于d被n除所得的余数， 则ac被n除所得的余数等于b d被n除所得的余数。
用同余式叙述就是：
如a≡b（mod n ），c≡d（mod n ）
则ac≡b d（mod n ）
 
定理2 被除数a加上或减去除数b的倍数，再除以b，余数r不变。即
如a ≡ r（mod b ），则a ± b n≡r（mod b ）
例如70≡1（mod 3 ）可得70±10×3≡1（mod 3 ） 
*/ 
#include<stdio.h>

int main() {
	int a, b, c;
	int kase=0;
	while((scanf("%d %d %d", &a, &b, &c)) != EOF) {
		int sum;
		// sum中由于每个数都与其他两个数的最小公倍数相乘所以sum对其他两个数取余均为零，只有对目标数字才会有该余数 
		sum = 70*a+21*b+15*c; 
		// 并且sum是结果加上105的整数倍，所以对105取余则为最小值
		if(sum%105 >10 && sum % 105 <= 100) {
			printf("Case %d: %d\n", ++kase, sum%105);
		} else {
			printf("No ansower\n");
		}
	}
	return 0;
} 
