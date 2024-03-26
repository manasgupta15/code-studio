#include <bits/stdc++.h> 
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
LinkedListNode<int>* reverseList(LinkedListNode<int>* head) {
        LinkedListNode<int>* prev = nullptr;
        LinkedListNode<int>* curr = head;
        LinkedListNode<int>* next = nullptr;
        
        while (curr != nullptr) {
            next = curr->next;  // Store the next node
            curr->next = prev;  // Reverse the pointer
            prev = curr;        // Move pointers one position ahead
            curr = next;
        }
        
        return prev;  // 'prev' now points to the new head of the reversed list
    }

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    LinkedListNode<int>* fast = head;
        LinkedListNode<int>* slow = head;
        
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        if (fast != nullptr) {
            slow = slow->next;
        }
        
        slow = reverseList(slow);
        fast = head;
        
        while (slow != nullptr) {
            if (fast->data != slow->data) {
                return false;
            }
            fast = fast->next;
            slow = slow->next;
        }
        return true;
}
