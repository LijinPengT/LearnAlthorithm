#include<iostream>
#include<cstdlib>

using namespace std;

// 定义List结构体 
struct List {
	int val;
	struct List* next;
};


// 创建链表 
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

// 显示链表
void Show(struct List* L) {
	while(L->next) {
		cout << L->next->val << " ";
		L = L->next;
	}
	cout << endl;
}

// 插入元素 
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

// 链表长度 
int lengthList(struct List* L) {
	int len = 0;
	while(L->next) {
		len++;
		L = L->next;
	}
	return len;
}

// 删除指定位置的节点 
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
	 	cout << "要删除的位置不存在" << endl;
	 } else {
	 	pre->next = ptr->next;
	 	free(ptr);
	 }
 }

// 清除所有节点 
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
			cout<<"输入要插入的位置和值：";
			cin >> i;
			cin >> data;
			InsertList(head, i, data);
			Show(head);
		}
		if(inputChar == 'd') {
			int n;
			cout << "输入要删除的位置：";
			cin >> n;
			DeleteList(head, n);
			Show(head);
		}
		if(inputChar == 's') {
			cout << "链表打印如下：" << endl; 
			Show(head);
		}
		if(inputChar == 'e') {
			ClearList(head);
			cout << "Clear all";
		}
	}
	return 0;
}

