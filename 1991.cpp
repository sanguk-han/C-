#include <iostream>
using namespace std;

typedef struct node *treePointer;
typedef struct node {
	char data;
	treePointer leftChild, rightChild;
};

void preorder(treePointer ptr) {
	if (ptr) {
		cout << ptr->data;
		preorder(ptr->leftChild);
		preorder(ptr->rightChild);
	}
}

void inorder(treePointer ptr) {
	if (ptr) {
		inorder(ptr->leftChild);
		cout << ptr->data;
		inorder(ptr->rightChild);
	}
}

void postorder(treePointer ptr) {
	if (ptr) {
		postorder(ptr->leftChild);
		postorder(ptr->rightChild);
		cout << ptr->data;
	}
}

int main() {
	const int num = 26;
	int n;
	int limit;

	node nodes[num + 1];
	cin >> n;
	limit = 1;
	for (int i = 1; i <=  n; i++) {
		nodes[i].data = char('A' + i - 1);
		nodes[i].leftChild = NULL;
		nodes[i].rightChild = NULL;
	}
	
	for (int i = 1; i <= n; i++) {
		char c1, c2, c3;
		cin >> c1 >> c2 >> c3;
		if (c2 != '.') {
			nodes[c1 - 'A' + 1].leftChild = &nodes[c2 - 'A' + 1];
		}
		if (c3 != '.') {
			nodes[c1 - 'A' + 1].rightChild = &nodes[c3 - 'A' + 1];
		}
	}

	preorder(&nodes[1]);
	cout << endl;

	inorder(&nodes[1]);
	cout << endl;

	postorder(&nodes[1]);

	return 0;
}