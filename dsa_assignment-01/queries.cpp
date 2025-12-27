#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head, int val) {
    Node* newNode = new Node(val);
    
    if (head == NULL) {
        head = newNode;
        return;
    }
    
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteAtIndex(Node* &head, int index) {
    if (head == NULL) return;
    if (index == 0) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }
    
    Node* temp = head;
    for (int i = 0; i < index - 1; i++) {
        if (temp == NULL || temp->next == NULL) {
            return;
        }
        temp = temp->next;
    }
    
    if (temp->next == NULL) {
        return;
    }
    
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int q;
    cin >> q;
    
    Node* head = NULL;
    
    for (int i = 0; i < q; i++) {
        int x, v;
        cin >> x >> v;
        
        if (x == 0) {
            insertAtHead(head, v);
        } else if (x == 1) {
            insertAtTail(head, v);
        } else if (x == 2) {
            deleteAtIndex(head, v);
        }
        
        printList(head);
    }
    
    return 0;
}
