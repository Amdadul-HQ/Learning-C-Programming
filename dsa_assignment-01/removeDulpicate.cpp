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

void insertAtTail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void removeDuplicates(Node* head) {
    if (head == NULL) return;
    Node* current = head;
    while (current != NULL) {
        Node* runner = current;
        
        while (runner->next != NULL) {
            if (runner->next->val == current->val) {
                Node* toDelete = runner->next;
                runner->next = runner->next->next;
                delete toDelete;
            } else {
                runner = runner->next;
            }
        }
        current = current->next;
    }
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val;
        if (temp->next != NULL) {
            cout << " ";
        }
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    
    int val;
    while (cin >> val && val != -1) {
        insertAtTail(head, tail, val);
    }
    
    removeDuplicates(head);
    printList(head);
    
    return 0;
}
