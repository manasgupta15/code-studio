/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    Node * l3 = new Node(0);
    int carry = 0;
    Node * head = l3;
    while(num1 && num2) {
        int val = num1->data + num2->data + carry;
        carry = val/10;
        l3->next = new Node(val%10);
        l3 = l3->next;
        num1 = num1->next;
        num2 = num2->next;
    }

     while(num1) {
        int val = num1->data + carry;
        carry = val/10;
        l3->next = new Node(val%10);
        l3 = l3->next;
        num1 = num1->next;
    }

     while(num2) {
        int val =  num2->data + carry;
        carry = val/10;
        l3->next = new Node(val%10);
        l3 = l3->next;
        num2 = num2->next;
    }

    if(carry) {
        l3->next = new Node(carry);
    }
    return head->next;

}
