#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
} *first = NULL;

void displayNode(struct Node *ptr, struct Node *one){
    cout<<"Elements of linked list\n";
    while(ptr  != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

struct Node *countNode(struct Node *ptr,struct Node *one){
    
    int count = 0;
    // set pointer to head
    ptr = one;
    while(ptr  != NULL){
        count++;
        ptr = ptr->next;
    }
    cout<<"No.of.Nodes "<<count<<endl;
}

struct Node *sumNode(struct Node *ptr,struct Node *one){
    // Finding the sum of nodes
    int sum = 0;
    // set pointer to head
    ptr = one;
     while(ptr  != NULL){
        sum += ptr->data;
        ptr = ptr->next;
    }
    cout<<"The sum of nodes "<<sum<<endl;
}

struct Node *maxNode(struct Node *ptr,struct Node *one){
    ptr = one;
    cout<<"p "<<ptr<<"\n";
    cout<<"data "<<ptr->data<<"\n";
    cout<<"next "<<ptr->next<<"\n";

}

struct Node *linearSearchNode(struct Node *ptr,struct Node *one){
    int x;
    while(1){
        cout<<"Enter the element to search\n";
        cin>>x;
        int flag = 0;
        ptr = one; // Pointing to head
        while(ptr != NULL){
            cout<<ptr->data<<" ";
            if(x == ptr -> data)
                flag = 1;
            ptr = ptr->next;
        }
        if(flag == 1)
            cout<<"Element is found\n";
        else    
            cout<<"Element not found\n";
    }
}

struct Node *moveTohead(struct Node *ptr, struct Node *head){
    struct Node *q = NULL;
     
    int x;
    cout<<"Enter the element to move\n";
    cin>>x;
    int flag = 0;
    ptr = head;     struct Node *first = head; // Pointing to head
    while(ptr != NULL){
        if(x == ptr->data){
            q->next = ptr->next;
            ptr->next = head;
            first = ptr;
            return 0;
        }   
        q = ptr;
        ptr = ptr->next;
    }
}

struct Node *insertion(struct Node *ptr, struct Node *head){
    
    int x,pos;
    cout<<"Enter the element and position to insert\n";
    cin>>x>>pos;
    struct Node *temp = NULL;

    if(pos > 0){
        temp->data = x;
        temp->next = head;
        head = temp;
    }
    else{
        while(pos-1){
            ptr = ptr->next;
            pos--;
        }
        temp->data = x;
        temp->next = ptr->next;
        ptr->next  = temp;
    }
}

int main(){
    struct Node *ptr, *one, *two, *three, *four, *five;

    ptr = new struct Node;
    one = new struct Node;
    two = new struct Node;
    three = new struct Node;
    four = new struct Node;
    five = new struct Node;

    // Pointing to head 
    ptr = one;

    one->data = 5;      one->next = two;
    two->data = 10;     two->next = three;
    three->data = 15;   three->next = four;
    four->data = 20;    four->next = five;
    five->data = 25;    five->next = NULL; 

    
    // Displaying node
    displayNode(ptr,one);                       // Working

    // counting no.of nodes
    countNode(ptr,one);                         // Working

    // Finding sum of nodes
    sumNode(ptr,one);                           // Working

    // Finding maximum node
    maxNode(ptr,one);                           // Working      

    // Searching an element in the list
    // linearSearchNode(ptr,one);
    
    // Insertion in linkedlist        
    // insertion(ptr,one);                 // Is not working properly
    
  
    return 0;
}