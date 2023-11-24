//This chapter related to functions and parameters

#include<iostream>
using namespace std;

void welcome(){
    cout<<"Good night ! \n";
}

int add(int x,int y){
    return x+y;
}

void swap1(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap2(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}


int display(int *A, int n){
    for(int i=0; i<n; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

int * square_arr(int *A, int n){
    int sum=0;
    for(int i=1; i<n; i++){
        A[i] = A[i] * A[i];
    }
    return A;
    
}

int main(){

    welcome();
    int a = 5, b = 25;
    cout<<"Before swapping \n";
    cout<<"A : "<<a<<" B : "<<b<<endl;

    cout<<"Call by value "<<endl;
    cout<<"Addition of " <<a<<" & "<<b<<" : "<<add(a,b)<<endl;

    swap1(&a,&b);
    cout<<"Swap using call by address \n";
    cout<<"A : "<<a<<" B : "<<b<<endl;

    swap2(a,b);
    cout<<"Swap using call by reference \n";
    cout<<"A : "<<a<<" B : "<<b<<endl;

    int Arr[]={2,4,6,8,10};
    cout<<"Passing Array as parameter \n";
    display(Arr,5);

    // To return a array from function we must to use pointers 
    cout<<"Returning a Array from function \n"; 
    int *ptr = square_arr(Arr,5);
    for(int i=0; i<5; i++)
        cout<<ptr[i]<<endl;


    return 0;
}