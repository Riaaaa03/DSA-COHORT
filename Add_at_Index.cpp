class Solution
{
  public:
  Node* addatIndex(Node* head,int v,int index)
  {

    Node* val=new Node(v);
    //check if head is NULL : the element to b addedd is first member of LL
    if(head==NULL)
    {
        head=val;
        return head;
    }
     if(index==0)
    {    val->next=head;
          head=val;
          return head;
    }
      Node* temp=head;
   
   for(int i=0;i<index-1 && temp!=NULL;i++)
    { temp=temp->next;
    }
    val->next=temp->next;
    temp->next=val;
    return head;  
  }
};
