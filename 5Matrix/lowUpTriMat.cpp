#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter dimension \n";
    cin>>n;
// Below formula is to find the size of the 1D array (row / column major formula for lower / upper triangular matrix respectively)
    int temp = (n*(n-1)/2 ) + n-1; 
    int *lm = new int[temp];
    int *um = new int[temp];
    int x,y;

// To store upper triangular matrix in an 1D array
    cout<<"Enter the elements for upper triangular matrix\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=j){
                cout<<"x : ";
                cin>>x;
                int index = ((j * (j - 1))/2) + i - 1; // This formula is to access the index of UTM using column major mapping
                um[index] = x;
            }
        }
    }
    cout<<endl;
    
// To store lower triangular matrix in an 1D array
    cout<<"Enter the elements for lower triangular matrix \n";
    for(int i=1;i<=n;i++){ 
        for(int j=1;j<=n;j++){
            if(i>=j){
                cout<<"y : ";
                cin>>y;
                int index = ((i * (i - 1))/2) + j - 1; // This formula is to access the index of LTM using row major mapping
                lm[index] = y;
            }
        }
    }

    cout<<endl;
    
// To display in the upper triangular matrix
    cout<<"Elements of upper triangular matrix \n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (i <= j){
                int index = ((j * (j - 1))/2) + i - 1; // This formula is to access the index of UTM using column major mapping
                cout<<um[index]<<" ";
            }   
            else 
                cout<<0<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

// To display in the lower triangular matrix
    cout<<"Elements of lower triangular matrix \n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (i >= j){
                int index = ((i * (i - 1))/2) + j - 1; // This formula is to access the index of LTM using row major mapping
                cout<<lm[index]<<" ";
            }   
            else 
                cout<<0<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
