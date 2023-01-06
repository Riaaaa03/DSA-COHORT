class Solution
{
  public:
  Node* addtohead(Node* head,int v)
  {

    Node* val=new Node(v);
    //check if head is NULL : the element to b addedd is first member of LL
    if(head==NULL)
    { head=val;
      return head;
    }
    val->next=head;
    head=val;
    return head;
  }
};
