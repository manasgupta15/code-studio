/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int value;
 *      Node *prev;
 *      Node *next;
 *      Node() : value(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : value(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * insertAtTail(Node *head, int k) {
    // Write your code here
     if (head == nullptr) {
        return new Node(k);
    }
    Node *tail = head;
    while(tail->next!= NULL) {
        tail = tail->next;
    }
    Node *temp = new Node(k,tail,nullptr);
    tail -> next = temp;
    return head;
}
