#include <iostream>
#include <process.h>
using namespace std;


int linearSearch(int key,int length,int* Arr){

        for(int i=0; i<length ; i++){
            if(key == Arr[i])
                return i;
        }    
        return -1;
}

int linearTransposition(int key,int length,int* Arr){
    for(int i=0; i<length; i++){
        if(key == Arr[i]){
            int temp = Arr[i];
            Arr[i] = Arr[i-1];
            Arr[i-1] = temp;

            return i-1;
        }   
    }
}

int move2Front(int key,int length,int* Arr){
    for(int i=0; i<length; i++){
        if(key == Arr[i]){
            int temp = Arr[i];
            Arr[i] = Arr[0];
            Arr[0] = temp;

            return 0;
        }   
    }
}

void display(int flag){
    if(flag != -1)
        cout<<"Element is found at index "<<flag<<endl;
    else    
        cout<<"Element is not found "<<endl;
}
int main(){

    int element, index, flag = -1; ; 
    int A[]={14,22,53,74,59,84,32};

    int length =  sizeof(A)/sizeof(A[0]);
    cout<<"Enter the element to search \n";
    cin>>element;

    cout<<"Normal method \n";
    flag = linearSearch(element,length,A);
    display(flag);

    for(int i=0; i<length; i++)
        cout<<A[i]<<" ";

    flag = -1; //Resetting flag to -1

    cout<<"\nTransposition method \n";
    flag = linearTransposition(element,length,A);
    display(flag);
    
    for(int i=0; i<length; i++)
        cout<<A[i]<<" ";

     flag = -1; //Resetting flag to -1

    cout<<"\nMove to front/head method \n";
    flag = move2Front(element,length,A);
    display(flag);

    for(int i=0; i<length; i++)
        cout<<A[i]<<" ";


    return 0;
}