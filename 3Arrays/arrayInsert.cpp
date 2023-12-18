#include <iostream>
#include <process.h>
using namespace std;


void Insert(int index,int element,int length,int* Arr){

    for(int i=length ; i>index ; i--)
        Arr[i] = Arr[i-1];
    
    Arr[index] = element;
}
int main(){

    int element, index, size=10;
    int A[size]={1,2,4,4,5};

    int length =  sizeof(A)/sizeof(A[0]);

    cout<<"Enter the element to insert \n";
    cin>>element;
    cout<<"Enter the index to insert the element \n";
    cin>>index;

     if(index > size){
        cout<<"Cant insert \nThe index is greater than the size of an array";
        exit(0);
     }

    cout<<"\nBefore Insertion \n";
    for(int i=0 ; i<size; i++)
        cout<<A[i]<<" ";

    Insert(index,element,length,A);

    cout<<"\n After Insertion \n";
    for(int i=0 ; i<size; i++)
        cout<<A[i]<<" ";

    return 0;
}