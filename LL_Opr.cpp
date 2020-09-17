# Linked_Lists_Operations
Some basic operations for linked lists

1.) Print a Linked List: 


int printll(){
    node* temp;
    temp = head;
    while(temp->link){
        cout<<temp->data<<"->";
        temp = temp->link;
    }
    cout<<temp->data;
    return 0;
}

2.) Create and add at beginning

struct node {
    int data;
    node* link;
};
node* head = NULL;
void insertBg(int d){
        node* ptr = new node();
        ptr->data = d;
        ptr->link = head;
        head = ptr;
}
int main() {
    int size, i, val;
    cin>>size;
    for(i=0;i<size;i++){
        cin>>val;
        insertBg(val);
    }
    printll();
    return 0;
}

3.) Reverse a Linked List

void ReversePrint(LinkedListNode* head) {
    LinkedListNode* p, *c, *n, *temp;
         p=NULL;
         c=head;
         while(c!=NULL){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
         }
         head = p;
         temp = head;
         while(temp!=NULL){
         printf("%d ", temp->val);
         temp=temp->next;
    }    
}
