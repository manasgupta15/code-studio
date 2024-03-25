/****************************************************************
Following is the Linked list node structure already written

class Node
{
public:
    int data;
    Node* next;
    Node(int data)
    { 
        this->data = data;
        next = NULL;
    }
};
*****************************************************************/

Node* oddEvenList(Node* head)
{
	// Write your code here.
    if(head == NULL) {
            return head;
        }
        
        Node *odd = head;
        Node *even = head->next;
        
        Node *evenHead = even;
        
        while(even!= NULL && even->next != NULL) {
            odd->next = odd->next->next;
            odd = odd->next;
            
            even->next = even->next->next;
            even = even->next;
            
        }
        
        odd->next = evenHead;
        
        return head;
}
