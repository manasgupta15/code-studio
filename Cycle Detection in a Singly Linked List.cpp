/****************************************************************

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


*****************************************************************/

bool detectCycle(Node *head)
{
	//	Write your code here
    Node *slowPtr = head;
    Node *fastPtr = head;

    while(slowPtr!=NULL && fastPtr!=NULL && fastPtr->next!=NULL) {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr ->next->next;

        if(slowPtr == fastPtr) {
            return true;
        }
    }
    return false;
}
