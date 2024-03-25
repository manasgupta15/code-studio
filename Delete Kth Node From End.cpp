/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    Node *dummy = new Node(-1);
    dummy->next = head;

    Node *firstPtr = dummy;
    Node *secondPtr = dummy;

    for(int i = 0; i<K; i++) {
        secondPtr = secondPtr->next;
    }

    while(secondPtr->next != NULL) {
        firstPtr = firstPtr->next;
        secondPtr = secondPtr->next;
    }

    firstPtr->next = firstPtr->next->next;

    return dummy->next;
}
