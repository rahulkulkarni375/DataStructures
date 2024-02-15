#include<iostream>
using namespace std;

struct Stack {
    int size;
    int top;
    int *Arr;
};
typedef struct Stack STACK;

void push(STACK *stk){
    int data,x;
    if(stk->top == stk->size -1)
        cout<<"Stack is Full";
    else{
        cout<<"Enter element to push\n";
        cin>>data;
        (stk->top)++;
        x= stk->Arr[(stk->top)] = data;
        cout<<x<<" value\n";
        
    }    
        
}

void pop(STACK *stk){
    if(stk->top == -1)
        cout<<"Stack is Empty\n";
    else{
        int x = stk->Arr[(stk->top)];
        cout<<x<<" delete"<<endl;
        (stk->top)--;
    }    
}

void peek(STACK *stk){
    int x = -1,pos;
    cout<<"Enter position to peek\n";   
    cin>>pos;
    if(((stk->top)-pos+1) < 0)
        cout<<"Invalid Position\n";
    else{
        x = stk->Arr[(stk->top)-pos+1];
    }     
    cout<<x<<" peeked\n";
}

void stackTop(STACK *stk){
    cout<<"Stack TOP is pointing at "<<stk->Arr[stk->top]<<endl;
}

void isFull(STACK *stk){
    if(stk->top == stk->size -1)
        cout<<"Stack is full\n";
    else    
        cout<<"Stack is not full\n";       
}

void isEmpty(STACK *stk){
    if(stk->top == -1)
        cout<<"Stack is empty\n";
    else    
        cout<<"Stack is not empty\n";
}

int main(){

    STACK stk;
    cout<<"Enter the size of stack\n";
    cin>>stk.size;
    
    stk.Arr = new int[stk.size];
    stk.top = -1;

    int i,n;
    cout<<"How many elements do you want to push\n";
    cin>>n;
    for(int i=0;i<n;i++)
        push(&stk);

    cout<<"How many elements do you want to pop\n";
    cin>>n;
    for(int i=0;i<n;i++)  
        pop(&stk);

    cout<<"How many elements do you want to peek\n";
    cin>>n;
    for(int i=0;i<n;i++)
        peek(&stk);
        
    cout<<"How many elements do you want to peek\n";
    cin>>n;
    for(int i=0;i<n;i++)
        stackTop(&stk);

    cout<<"Check whether stack is full \n";
    isFull(&stk);

    cout<<"Check whether stack is empty \n";
    isEmpty(&stk);

    return 0; 
}