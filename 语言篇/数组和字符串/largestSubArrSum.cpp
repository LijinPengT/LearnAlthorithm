#include<iostream>

using namespace std; 

int main() {
	int n, start = 0, end = 0;
	// 输入整型数组
	cout<<"输入数组长度：";
	cin>>n;
	int *p = new int[n];
	cout<<"输入一个整型数组";
	for(int i = 0; i < n; i++) {
		cin>>p[i];
	} 
	int sum = p[0];
	int max = p[0];
	for (int i = 1; i < n; i++) {
		if(sum > 0) {			// 从第二个数判断是否为负值 
			sum = sum + p[i];	// 如果为正，则将sum与其相加
			if(sum > max) {		// 判断是否为最大，若是将赋值给max，并将子数组末位置改变 
				max = sum;
				end = i;
			} 
		} else {
			sum = p[i];			// 是负数的话，将第i+1个数赋值给sum 
			if(sum > max) {		// 判断是否为最大，是的话就赋值给sum，并将子数组初始与终止位置改变 
				max = sum;
				start = i;
				end = i; 
			} 
		}
	}

	cout<<"最大子数组为：";
	for (int j = start; j < end+1; j++) {
		cout<<p[j]<<" ";
	}
	cout<<"最大子数组和为："<<max<<endl;
	return 0; 
}
 
