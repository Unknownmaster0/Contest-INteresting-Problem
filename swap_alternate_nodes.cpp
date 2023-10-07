#include <iostream>
using namespace std;

/*question link -> https://practice.geeksforgeeks.org/problems/pairwise-swap-elements-of-a-linked-list-by-swapping-data/1*/

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

/*
// method 1
Node* pairWiseSwap(struct Node* head)
{
    //  do it with help of recursive call
    if(head == NULL || head->next == NULL)
        return head;

    Node* temp = head->next;
    head->next = pairWiseSwap(head->next->next);
    temp->next = head;

    return temp;
}
*/

// MY OWN METHOD.
Node *pairWiseSwap(struct Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *curr = head->next;
    Node *prev = head;

    Node *temp = curr;

    Node *currNext = NULL;
    Node *prevNext = NULL;

    while (curr != NULL)
    {
        prevNext = curr->next;
        if (prevNext != NULL)
            currNext = prevNext->next;
        else
            currNext = prevNext;

        curr->next = prev;
        // for odd number of nodes.
        if (prevNext != NULL && currNext == NULL)
            prev->next = prevNext;
        else
            prev->next = currNext;

        curr = currNext;
        prev = prevNext;
    }

    head = temp;

    return head;
}

int main()
{

    return 0;
}