/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;
        Node *prev;

        Node(int val) {
            this->data = val;
            next = NULL;
            prev = NULL;
        }
    };

************************************************************/

void deleteNode(Node* node) {
    if (node == nullptr)
        return;

    if (node->prev != nullptr)
        node->prev->next = node->next;
    if (node->next != nullptr)
        node->next->prev = node->prev;

    delete node;
}
