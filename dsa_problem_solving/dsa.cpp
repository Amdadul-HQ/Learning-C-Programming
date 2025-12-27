#include <bits/stdc++.h>
using namespace std;

// int main(){
// 	int n;
// 	cin >> n;
// 	int a[n];
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> a[i];
// 	}

// 	int preSum[n];

// 	preSum[0] = a[0];

// 	for (int i = 1; i < n; i++)
// 	{
// 		preSum[i] = preSum[i - 1] + a[i];
// 		cin >> preSum[i];	
// 	}

// 	for (int i = 0; i < n; i++)
// 	{
// 		cout << preSum[i] << " ";
// 	}
// }


class Node {
public:
	int val;
	Node* next;
	Node(int val){
		this->val = val;
		this->next = NULL;
	}
};

void insert_at_head (Node* &head,int val){
	Node* newnode = new Node(val);
	newnode->next = head;
	head = newnode;
};

void print_link_list (Node* head){
	Node* tmp = head;
	while(tmp != NULL){
		cout << tmp->val << endl;
		tmp = tmp->next;
	}
}

int main () {
	Node* head = new Node(10);
	Node* a = new Node(20);
	Node* b = new Node(30);

	head->next = a;
	a->next = b;

	insert_at_head(head,100);
	print_link_list(head);
}