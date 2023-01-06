class solution
{
    private:
    Node* rev(Node* A)
    { Node* c=A;
      Node* p=NULL;
      while(c!=NULL)
      {
          Node* f=c->next;
          c->next=p;
          p=c;
          c=f;
      }
      return p;
    }
    Node* m(Node* A)
    { Node* f=A;
      Node* s=f;
     
     while(f!=NULL && f->next!=NULL )
      {   s=s->next;
          f=f->next->next;
      }
      return s;
    }
    
    public:
    Node* foldList(Node* A) 
    {
        if(A==NULL||A->next==NULL || A->next->next==NULL )   return A;
        Node* t=A;
        Node* mid=m(A);
        Node* r=rev(mid);
   
        while(r!=NULL && t!=r)
        {
            Node* f=r->next;
            if(f!=NULL)      r->next=t->next;
            t->next=r;
            t=r->next;
            r=f;
        }
        return A;
    }
};
