Node* MergeSort(Node* head1, Node* head2)  
{  
    Node* p=head1;
    Node* q=head2;
    Node* res=new Node (-1);
    Node* r=res;
    
    while(p && q){
        if(p->data < q->data ){
            r->next=p;
            p=p->next;
        }
        else{
            r->next=q;
            q=q->next;
        }
        r=r->next;
    }
    while(p){
        r->next=p;
        p=p->next;
        r=r->next;
    }
    while(q){
        r->next=q;
        q=q->next;
        r=r->next;
    }
    return res->next;
} 
