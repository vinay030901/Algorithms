#include <bits/stdc++.h>
using namespace std;
 struct ListNode {
 int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
void traverse(struct ListNode *ptr)
{
    while (ptr != NULL)
    {
        printf("%d  ", ptr->val);
        ptr = ptr->next;
    }
    printf("\n");
}
ListNode* reverseList(ListNode* head){
        ListNode *newhead=NULL;
        while(head!=NULL){
            ListNode *next=head->next;
            head->next=newhead;
            newhead=head;
            head=next;
        }
        return newhead;
    }
int main(){
    
}