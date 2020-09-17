//Linked_Lists_Operations
//Some basic operations for linked lists

//1.) Print a Linked List: 


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

//2.) Create and add at beginning

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

//3.) Reverse a Linked List

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

// 4.) Insert at any position

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node {
    int data;
    node* link;
};
node* head = NULL;
node* insertAtIndex(int d, int index, node* pos){
        node* ptr = new node();
        if(head == 0|| index == 0)
        {
            ptr->data = d;
            ptr->link = head;
            head = ptr;
        }
        else{
            pos = head;
            while(pos->data == index-1){
                pos=pos->link;
                pos->data++;
            }
            ptr->data = d;
            ptr->link = pos->link;
            pos->link = ptr;
        }
        return 0;
}

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

int main() {
    int size, i, val, index;
    node* pos = new node();
    cin>>size;
    pos->data = 0;
    pos->link = head;
    for(i=0;i<size;i++){
        cin>>index>>val;
        insertAtIndex(val, index, pos);
    }
    printll();
    return 0;
}

// 5.) Deletion at beginning

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node {
    int data;
    node* link;
};
node* head = NULL; //Gloabad declaration

void input(int d){
    node* ptr = new node();
    if(head == NULL){
        ptr->data = d;
        ptr->link = head;
        head = ptr;
    }
    else{
        ptr->data = d;
        node* temp = head;
        while(temp->link!=NULL){
            temp=temp->link;
        }
        temp->link = ptr;
    }
    
}

void delLL(){
    node* ptr = head;
    head=head->link;
    free(ptr);    
}

void print(){
    node* temp = head;
    while(temp->link){
        cout<<temp->data<<"->";
        temp=temp->link;
    }
    cout<<temp->data;
}

int main() {
    int i, val, k, size;
    cin>>size;
    for(i=0;i<size;i++){
        cin>>val;
        input(val);
    }
    cin>>k;
    for(i=k;i>0;i--){
        delLL();
    }
    print();
    return 0;
    
}



