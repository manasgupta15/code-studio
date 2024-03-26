#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

template <typename T>
Node<T>* sortTwoLists(Node<T>* first, Node<T>* second)
{
    Node<T>* returnNode = new Node<T>(-1);
    Node<T>* headNode = returnNode;

    while(first != NULL && second != NULL) {
        if(first->data <= second->data) {
            returnNode->next = first;
            first = first->next;
        } else {
            returnNode->next = second;
            second = second->next;
        }

        returnNode = returnNode->next;
    }
    
    if(first == NULL) {
        returnNode->next = second;
    } else if(second == NULL) {
        returnNode->next = first;
    }

    return headNode->next;
}
