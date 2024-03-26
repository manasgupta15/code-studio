/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> * partitionList(LinkedListNode<int> *head, int k)
{
    // Write your code here.
    LinkedListNode<int> * left = new LinkedListNode<int> (-1);
    LinkedListNode<int> * right = new LinkedListNode<int> (-1);

    LinkedListNode<int> * lftail = left;
    LinkedListNode<int> * rgtail = right;

    while(head) {
        if(head -> data < k) {
            lftail -> next = head;
            lftail = lftail->next;
        } 
        else {
            rgtail->next = head;
            rgtail = rgtail->next;
        }

        head = head->next;
    }

    lftail -> next = right -> next;
    rgtail -> next = nullptr;
    return left-> next;
    
}
