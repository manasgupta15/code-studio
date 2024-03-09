/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
    };

************************************************************/

Node* insertEnd(Node* head, int k) {
    // Write your code here.
    if(head == NULL) return new Node(k);
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    Node* newNode = new Node(k);
    temp->next = newNode;
    return head;
}
