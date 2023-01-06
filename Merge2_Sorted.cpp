class Solution
{
  public:
  Node* mergeSortLL(Node* A,Node* B)
  {
      Node* ans=NULL;
      if(A==NULL)   return B;
      if(B==NULL)   return A;
      if(A->val < B->val)
      {
          ans=A;
          ans->next=mergeSortLL(A->next,B);
      }
      else
      {
          ans=B;
          ans->next=mergeSortLL(A,B->next);
      }
      return ans;
  }
};
