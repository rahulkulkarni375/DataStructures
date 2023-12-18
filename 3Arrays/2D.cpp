#include <iostream>
using namespace std;

int main(){

    int A[2][3] = {2,3,4,1,7,5};


    cout<<"\nAddresses of Array A \n";
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++)
            cout<<&A[i][j]<<" ";
        cout<<endl;
    }

    int *B[2];
    B[0] = new int[2]; 
    B[1] = new int[3]; 
    B[2] = new int[4];

    cout<<"\nAddresses of Array B \n";
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++)
            cout<<&B[i][j]<<" ";
        cout<<endl;
    }

    int **C;
    C = new int*[3];

    C[0] = new int[3];
    C[1] = new int[3];
    C[2] = new int[3];


    cout<<"\nAddresses of Array C \n";
    cout<<"C : "<<C<<endl;
    cout<<"**C : "<<**C<<endl;
    cout<<"Holds the address of array  (*C) : "<<*C<<endl;
    cout<<"Address of C : (&C) "<<&C<<endl;
    
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++)
            cout<<&C[i][j]<<" ";
        cout<<endl;
    }

    return 0; 
}