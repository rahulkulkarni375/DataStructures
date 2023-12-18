#include <iostream>
#include <process.h>
using namespace std;


int Delete(int index,int length,int* Arr){

        for(int i=index ; i<length ; i++)
                Arr[i] = Arr[i+1];
        
        return *Arr;

}
int main(){

    int index, size=10;
    int A[size]={1,2,4,4,5};

    int length =  sizeof(A)/sizeof(A[0]);

    cout<<"Enter the index to delete the element \n";
    cin>>index;

     if(index > size){
        cout<<"Cant insert \nThe index is greater than the size of an array";
        exit(0);
     }

    cout<<"\nBefore Deletion \n";
    for(int i=0 ; i<size; i++)
        cout<<A[i]<<" ";

    Delete(index,length,A);
    cout<<"\nThe delete element is "<<A[index]<<endl;

    cout<<"\nAfter Deletion \n";
    for(int i=0 ; i<size; i++)
        cout<<A[i]<<" ";

    return 0;
}