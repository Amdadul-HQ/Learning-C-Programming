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

int findMaxMinDiff(Node* head) {
    if (head == NULL) return 0;
    
    int maxVal = INT_MIN;
    int minVal = INT_MAX;
    
    Node* temp = head;
    while (temp != NULL) {
        maxVal = max(maxVal, temp->val);
        minVal = min(minVal, temp->val);
        temp = temp->next;
    }
    
    return maxVal - minVal;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    
    int val;
    while (cin >> val && val != -1) {
        insertAtTail(head, tail, val);
    }
    
    int diff = findMaxMinDiff(head);
    cout << diff << endl;
    
    return 0;
}