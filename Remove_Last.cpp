void removeLast () {
  if(head){
  if (head->next==NULL) head=NULL;
  else{
    Node* temp=head;
    while(temp->next->next != NULL){
    temp=temp->next;
    }
    Node* lastNode=temp->next;
    temp->next=NULL;
    free(lastNode);
    }
  }
}
