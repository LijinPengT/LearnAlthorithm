#include<iostream>
#include<cstdlib>

using namespace std;

// ����List�ṹ�� 
struct List {
	int val;
	struct List* next;
};


// �������� 
void Init(struct List* L) {
	int cur;
	cin >> cur;
	while(cur != -1) {
		struct List* ptr = (struct List*)malloc(sizeof(struct List));
		ptr->val = cur;
		ptr->next = NULL;
		L->next = ptr;
		L = L->next;
		cin >> cur; 
	}
}

// ��ʾ����
void Show(struct List* L) {
	while(L->next) {
		cout << L->next->val << " ";
		L = L->next;
	}
	cout << endl;
}

// ����Ԫ�� 
void InsertList(struct List* L, int pos, int data) {
	struct List* pre = NULL;
	struct List* ptr = (struct List*)malloc(sizeof(struct List));
	ptr->val = data;
	ptr->next = NULL;
	
	while(pos && L->next) {
		pre = L;
		L = L->next;
		pos--;
	}
	
	if(pos > 0) {
		L->next = ptr;
		L = L->next;
	} else {
		pre->next = ptr;
		ptr->next = L;
	}
}

// ������ 
int lengthList(struct List* L) {
	int len = 0;
	while(L->next) {
		len++;
		L = L->next;
	}
	return len;
}

// ɾ��ָ��λ�õĽڵ� 
void DeleteList(struct List* L, int k) {
 	if(lengthList(L) <= 0) {
 		cout << "wrong" << endl;
 		return;
	 }
	 struct List* ptr = L->next;
	 struct List* pre = L;
	 k = k - 1; 
	 while(k-- && ptr) {
		pre = ptr;
		ptr = ptr->next;
	 }
	 if(ptr == NULL || k > 0) {
	 	cout << "Ҫɾ����λ�ò�����" << endl;
	 } else {
	 	pre->next = ptr->next;
	 	free(ptr);
	 }
 }

// ������нڵ� 
void ClearList(struct List* L) {
 	struct List* ptr = L;
 	if (lengthList(L) > 0) {
 		while(ptr->next) {
 			struct List* temp = ptr->next;
 			ptr->next = ptr->next->next;
 			free(temp);
		 }
	 }
 }
 
int main() {
	struct List* head = (struct List*)malloc(sizeof(struct List));
	head->next = NULL;
	Init(head);
	
	char inputChar;
	while(inputChar != 'q') {
//		if(inputChar >= '0' && inputChar <= '9') {
//			InsertList(head, 1, )
//		}
		cin>>inputChar;
		if(inputChar == 'i') {
			int i, data;
			cout<<"����Ҫ�����λ�ú�ֵ��";
			cin >> i;
			cin >> data;
			InsertList(head, i, data);
			Show(head);
		}
		if(inputChar == 'd') {
			int n;
			cout << "����Ҫɾ����λ�ã�";
			cin >> n;
			DeleteList(head, n);
			Show(head);
		}
		if(inputChar == 's') {
			cout << "�����ӡ���£�" << endl; 
			Show(head);
		}
		if(inputChar == 'e') {
			ClearList(head);
			cout << "Clear all";
		}
	}
	return 0;
}

