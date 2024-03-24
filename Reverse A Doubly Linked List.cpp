/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head)
{   
    // Write your code here   
   Node *cur = head;
   if(cur == NULL  || cur -> next == NULL) {
       return head;
   }
   while(cur -> next != NULL) {
       cur = cur -> next;
   }
   head = cur;
   cur -> next = cur->prev;
   cur->prev = NULL;
   cur = cur-> next;
   while(cur -> prev!= NULL) {
       Node *temp = cur -> next;
       cur -> next = cur -> prev;
       cur -> prev  = temp;
       cur = cur -> next;
   }
   cur -> prev = cur -> next;
   cur -> next = NULL;
   return head;
}

