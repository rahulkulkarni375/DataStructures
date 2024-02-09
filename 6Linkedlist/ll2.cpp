#include<iostream>
using namespace std;

typedef struct Node {
    int data;
    struct Node* next;
}NODE;
struct Node *head = NULL;

// void creatHeadNode(struct Node *head, struct Node *tail){
//     int x;
//     cout<<"Enter the values for head node \n";
//     cin>>x;

//     struct Node *temp = NULL;
//     temp->data = x;
//     temp->next = NULL;
    
//     head = temp;
// }

struct Node* createList(struct Node *head){
    int n;
    cout<<"How many elements do you want in the list \n";
    cin>>n;
    int Arr[n];
    cout<<"Enter the elements for the list \n";
    for(int i=0; i<n; i++)
        cin>>Arr[i];
    
    struct Node *ptr = new NODE;
    ptr->data = Arr[0];
    ptr->next = NULL;

    for(int i=1; i<n; i++){
        ptr->data = Arr[i];
        ptr->next = NULL;
        head->next = ptr;
        head = ptr;
    }

    cout<<"Elements of linked list\n";
    while(ptr  != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;

    return head;
    
}

void insertAtBeginning(){
    cout<<"Insert Begin\n";
    int x;
    cout<<"Enter the value to insert at beginning \n";
    cin>>x;
    struct Node *temp = new struct Node;
    temp->data = x;
    temp->next = NULL;
    
    
}
void insertAtEnd(){
    cout<<"Insert End\n";
}
void insertAnywhere(){
    cout<<"Insert Anywhere\n";
}

void displayList(){
    cout<<"Elements of linked list\n";
    // struct Node *ptr = NULL;
    // ptr = head;
    // while(ptr  != NULL){
    //     cout<<ptr->data<<" ";
    //     ptr = ptr->next;
    // }
    struct Node* ptr = new  NODE;
    ptr = head;
    while (ptr != NULL) {
       cout<< ptr->data <<" ";
       ptr = ptr->next;
    }
    cout<<endl;
}

int main(){

    struct Node *temp = '\0';

       do{
            cout<<"1.Create list \t2.Insert At Beginning \t3.Insert At End \t4.Insert Anywhere \t5.Display \t6.Exit \n";
            cout<<"Where do you want to insert\n";  
            int choice;
            cin>>choice;

            switch(choice){
                case 1 :  createList(head);    break;
                case 2 :  insertAtBeginning(); break;
                case 3 :  insertAtEnd();       break;
                case 4 :  insertAnywhere();    break;
                case 5 :  displayList();       break;
                case 6 :  exit(0);  
               default : cout<<"Invalid choice\n"; break;
            } 
    }while(1);     

    return 0;
}