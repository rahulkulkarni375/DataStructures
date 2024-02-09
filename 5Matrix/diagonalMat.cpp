#include <iostream>
using namespace std;

int main(){
    //Diagonal matrix contains non-zero element in the diagonal

    int x,n,i,j,Mat[5] = {};
    //Reading diagonal matrix
    cout<<"Enter size : "<<endl;
    cin>>n;
    cout<<"Enter Elements \n";
    for(i=1  ; i<=n; i++)
        cin>>Mat[i];
    
    cout<<"The Diagonal matrix is \n";
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(i == j)
                cout<<Mat[i]<<" ";
            else    
                cout<<"0"<<" ";
        }
        cout<<endl;
    }
   
    return 0;
}