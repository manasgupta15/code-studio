#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/

Node* pairsSwap(Node *head)
{
    //  Write your code here.
    Node* dummy = new Node(-1);
    dummy->next = head;

    Node* point = dummy;

    while(point->next != nullptr && point->next->next != nullptr) {
        Node* swap1 = point->next;
        Node* swap2 = point->next->next;
            
            swap1->next = swap2->next;
            swap2->next = swap1;
            
            point->next = swap2;
            point = swap1;
    }

    return dummy->next;
    
}
