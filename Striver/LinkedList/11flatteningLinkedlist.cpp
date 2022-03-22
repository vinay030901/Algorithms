#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *bottom;

    Node(int x)
    {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
Node *merge(Node *list1, Node *list2)
{
    // merge technique is used from temp
    Node *temp = new Node(0);
    Node *res = temp;
    while (list1 != NULL && list2 != NULL)
    {
        if (list1->data <= list2->data)
        {
            temp->bottom = list1;
            list1 = list1->bottom;
            temp = temp->bottom;
        }
        else
        {
            temp->bottom = list2;
            list2 = list2->bottom;
            temp = temp->bottom;
        }
    }
    if (list1)
        temp->bottom = list1;
    if (list2)
        temp->bottom = list2;
    return res->bottom;
}
Node *flatten(Node *head)
{
    // we will use merge sort technique for this task
    if (head == NULL || head->next == NULL)
        return head;

    head->next = flatten(head->next); // recursion is first used to reach the end of lists and then merge from there
    head = merge(head, head->next);
    return head;
}