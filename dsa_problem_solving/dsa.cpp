#include <bits/stdc++.h>
using namespace std;

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
	if(head == NULL){
		head = newnode;
		return;
	}
	newnode->next = head;
	head = newnode;
};

void insert_at_any (Node* &head,int index,int val){
	Node* newnode = new Node(val);
	if(head == NULL){
		head = newnode;
		return;
	}
	Node* tmp = head;
	for (int i = 0; i < index-1; i++)
	{
		/* code */
		tmp = tmp->next;
	}
	newnode->next = tmp->next;
	tmp->next = newnode;

};


void inser_at_tail (Node* &head,Node* &tail,int val){
	Node* newnode = new Node(val);
	if(head == NULL){
		head = newnode;
		return;
	}
	// Node* tmp = head;
	// while(tmp->next != NULL){
	// 	tmp = tmp->next;
	// }
	tail->next = newnode;
	tail = tail->next;
}

void print_link_list (Node* head){
	Node* tmp = head;
	while(tmp != NULL){
		cout << tmp->val << endl;
		tmp = tmp->next;
	}
}

int main () {
	// Node* head = NULL;
	Node* head = new Node(10);
	Node* a = new Node(20);
	Node* b = new Node(30);

	head->next = a;
	a->next = b;

	// insert_at_head(head,100);
	// insert_at_head(head,200);
	// insert_at_head(head,300);
	// inser_at_tail(head,200);
	insert_at_any(head,2,100);
	inser_at_tail(head,b,200);
	print_link_list(head);
}