#include<iostream>

using namespace std; 

int main() {
	int n, start = 0, end = 0;
	// ������������
	cout<<"�������鳤�ȣ�";
	cin>>n;
	int *p = new int[n];
	cout<<"����һ����������";
	for(int i = 0; i < n; i++) {
		cin>>p[i];
	} 
	int sum = p[0];
	int max = p[0];
	for (int i = 1; i < n; i++) {
		if(sum > 0) {			// �ӵڶ������ж��Ƿ�Ϊ��ֵ 
			sum = sum + p[i];	// ���Ϊ������sum�������
			if(sum > max) {		// �ж��Ƿ�Ϊ������ǽ���ֵ��max������������ĩλ�øı� 
				max = sum;
				end = i;
			} 
		} else {
			sum = p[i];			// �Ǹ����Ļ�������i+1������ֵ��sum 
			if(sum > max) {		// �ж��Ƿ�Ϊ����ǵĻ��͸�ֵ��sum�������������ʼ����ֹλ�øı� 
				max = sum;
				start = i;
				end = i; 
			} 
		}
	}

	cout<<"���������Ϊ��";
	for (int j = start; j < end+1; j++) {
		cout<<p[j]<<" ";
	}
	cout<<"����������Ϊ��"<<max<<endl;
	return 0; 
}
 
