#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

    int size = 0; // Rename the global size variable

void insert(Node **head)
{
  Node *new_node = new Node();
  int data;
  cout<<"Enter data to insert\n";
  cin>>data;
  new_node->data = data;
  new_node->next = *head;
  *head = new_node;
  size++;
}

void insertFront(Node** head){

    Node* new_node = new Node;  
    int data;
    cout<<"Enter data to insert front\n";
    cin>>data;
    new_node->data = data;
    
    // change the next node of this newNode 
    // to current head of Linked List
    new_node->next = *head;

    // new_node should become the new head of Linked List
    *head = new_node;
    size++;
}

void insertEnd(Node** head)
{

    Node* freshNode = new Node;
    int data;
    cout<<"Enter data to insert End\n";
    cin>>data;
    freshNode->data = data;
    // since this will be the last node so it will point to NULL
    freshNode->next = NULL;

    //need this if there is no node present in linked list at all
    if(*head==NULL)
    {
        *head = freshNode;
        cout << freshNode->data << " inserted" << endl; 
        size++;
        return; 
    }
 
    struct Node* temp = *head; 

    // traverse to the last node of Linked List 
    while(temp->next!=NULL)
        temp = temp->next;

    // assign last node's next to this freshNode
    temp->next = freshNode;
    size++;
}

// Method to insert at a given position
void insertPosition(Node **head)
{
  Node *new_node = new Node;
  int data,pos;
  cout<<"Enter data and position to insert \n";
  cin>>data>>pos;
  new_node->data = data;
  new_node->next = nullptr;

  // Invalid positions
  if (pos < 1 || pos > size + 1) // Use listSize instead of size
  {
    cout<<"Position is invalid : "<<pos << endl;
    return;
  }

  // Inserting as the first node
  if (pos == 1)
  {
    new_node->next = *head;
    *head = new_node;
    size++; // Update the global size variable
  }
  else
  {
    Node *temp = *head;

    // Traverse to the current (pos-1)th node
    while (--pos > 1)
    {
      temp = temp->next;
    }

    new_node->next = temp->next;
    temp->next = new_node;
    size++; // Update the global size variable
  }
}

void deleteFirst(Node** head){
  Node *temp = *head;

  if(temp->next == NULL){ 
    free(temp);
    *head = NULL;
    return;
  }
  *head = temp->next;
  cout<<temp->data<<" is deleted from front\n";
  free(temp);
}

void deleteLast(Node** head){
    struct Node* temp = *head; 
    Node *prev = new Node;

    while(temp->next !=NULL){
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    cout<<temp->data<<" is deleted from last\n";
    free(temp);
}

void deletePosition(Node ** head){
  Node *temp = *head;
  Node *prevNode;

  int pos,n;
  cout<<"Enter position to delete a node \n";
  cin>>pos;

  if (pos < 1 || pos > size){
      cout << "Invalid" << endl;
      return;
  }

  if (pos == 1){
      *head = (*head)->next;
      cout << temp->data <<" is deleted from "<<pos<<" position"<< endl;
      delete(temp);
      return;
  }

  while ((pos--) >1){
      prevNode = temp;
      temp = temp->next;
  }

  prevNode->next = temp->next;

  cout << temp->data<<" is deleted from "<<pos<<" position"<< endl; 
  delete(temp);
}

//Works Good
int flag = 1; //Declared here because we want to use this variable in removing duplicates
void Cheack_Sorted(Node** head){    
  Node* first = new Node;
  first = *head;
  int x = 0; // Try to keep it as least value -32768 becuase its of int type 

  while(first != NULL ){

    if(first->data < x){
        flag = 0;
        break;
    } 
      
    else {
        x = first->data;
        first = first->next;
    }
  }
  if(flag) 
    cout<<"\nThe list is sorted\n";
  else  
    cout<<"The list is not sorted\n";

}

bool duplicateList = false;
void RemoveDuplicatesInSortedList(Node** head){ 
  Node* ptr = *head;
  Node* qtr = ptr->next;

  while(qtr != NULL){
    if(ptr->data != qtr->data){
      qtr = ptr ;
      ptr = ptr->next;
    }
    else{
      ptr->next = qtr->next;
      qtr = ptr->next;
      duplicateList = true;
    }
  }
  if(duplicateList)
    cout<<"Duplicates are removed from the list\n";
  else  
    cout<<"No duplicates are there in the list\n";

}

void ReverseList(Node** head){
  Node *temp = *head , *cur = *head, *last = NULL;
  int Arr[size] , i = 0;

  while(temp != NULL){
    Arr[i++] = temp->data;
    temp = temp->next;
  }
  for(int i=size-1;i>0;i--){
    cur->data = Arr[i];
    cur = cur->next;
  }
  cout<<endl;
}

void CountNode(Node** head){
        Node *temp = *head;
        int Listsize = 0;
        while(temp != NULL){
            temp = temp->next;
            Listsize++;
        }
        size = Listsize;
        cout<<"The size of the list : "<<Listsize<<endl;
}

void printList(Node* node){
    
    cout << "\nLinked List : " ;
    while(node!=NULL){
        if(node->next != NULL)
            cout << node->data <<" --> ";
        else    
            cout << node->data <<".";

        node = node->next;
    }
    cout << endl;
}


int main(){

    Node* head = NULL;
    insert(&head);                    printList(head);  
    
    int n,i;
    cout<<"How many elements do you want to insert front ?\n";
    cin>>n;
    for(i=0;i<n;i++){
      insertFront(&head);
      cout<<i+1<<" element is inserted at front !\n";
    }
    printList(head);    

    cout<<"How many elements do you want to insert end ?\n";
    cin>>n;
    for(i=0;i<n;i++){
        insertEnd(&head);
        cout<<i+1<<" element is inserted at end !\n";
    }
    printList(head); 

    cout<<"How many elements do you want to insert by using position ?\n";
    cin>>n;
    for(i=0;i<n;i++){
        insertPosition(&head);
        cout<<i+1<<" element is inserted at given position !\n";
    }
    printList(head);  

    cout<<"How many elements do you want to delete from front ?\n";
    cin>>n;
    for(i=0;i<n;i++){
       deleteFirst(&head);
       cout<<i+1<<" element is deleted from front !\n";
    }
    printList(head);     

    cout<<"How many elements do you want to delete from last ?\n";
    cin>>n;
    for(i=0;i<n;i++){
        deleteLast(&head);
        cout<<i+1<<" element is deleted from last !\n";
    }
    printList(head);     

    cout<<"How many elements do you want to delete from by using position ?\n";
    cin>>n;
    for(i=0;i<n;i++){
        deletePosition(&head);
        cout<<i+1<<" element is deleted by using given position !\n";
    }
    printList(head);  

    // Cheack_Sorted(&head); 

    // if(flag)
    //   RemoveDuplicatesInSortedList(&head);  // This function is not working properly 
    // else  
    //   cout<<"Cannot perform remove duplicates operation \n";
    ReverseList(&head);
        printList(head);  
    CountNode(&head);
        printList(head);  
    
    return 0;  
}