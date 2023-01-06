class Solution {
public:

int getLength(ListNode* h)
    {   int count=0;
        while(h!=NULL)
        {
            count++;
            h=h->next;
        }
        return count;
    }
  ListNode* reverseKGroup(ListNode* head, int k) {

         if(head==NULL||head->next==NULL)
        { return head;
        }

    int length=getLength(head);
        if(k>length) return head;
        
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nextptr=NULL;
         int count=0;
         
        while(curr!=NULL && count<k){
            nextptr=curr->next;
            curr->next=prev;

            prev=curr;
            curr=nextptr;

            count++;
        }
        if(nextptr!=NULL){
            head->next=reverseKGroup(nextptr, k);
        }
        return prev;
    }
};
