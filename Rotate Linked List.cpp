/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     // Write your code here.
     if(head == nullptr || k == 0) return head;
     Node *temp = head;
     int n = 0;

     while(temp->next) {
          temp = temp->next;
          n++;
     }

     temp->next = head;
     k = k % (n+1);
     int jump = n - k;
     temp = head;
     while(jump) {
          temp = temp -> next;
          jump--;
     }
     Node *returnNode = temp->next;
     temp->next = nullptr;
     return returnNode;

}
