class Solution
{
  public:
   Node* kthElement_end(Node* head,int k)
  {
      if(head==NULL ||head->next==NULL) return head;
      Node* movefast=head;
      Node* moveslow=head;
      for(int i=0;i<k && fast!=NULL;i++)
            movefast=movefast->next;
      
      while(movefast!=NULL)
      {   moveslow=moveslow->next;
          movefast=movefast->next;
      }
      return moveslow;
  }
};
