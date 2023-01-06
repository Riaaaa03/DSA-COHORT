class Solution
{
  private:
  int len(Node* head)
  {
      int c=0;
      Node* t=head;
      while(t!=NULL)  
      {   t=t->next;
          c++;
      }
      return c;
  }
  public:
  Node* intersection_LL(Node* A,Node* B)
  {
      int length1=len(A);
      int length2=len(B);
      Node* t1=A;
      Node* t2=B;
      if(length1>length2)
      {
          int diff=length1-length2;
          for(int i=0;i<diff;i++)
              t1=t1->next;
      }
      else if(length2>length1)
      {
          int diff=length2-length1;
          for(int i=0;i<diff;i++)
              t2=t2->next;
      }
      while(t1!=NULL && t2!=NULL)
      {
          if(t1==t2)  return t1;
          t1=t1->next;
          t2=t2->next;
      }
      return NULL;
  }
};
