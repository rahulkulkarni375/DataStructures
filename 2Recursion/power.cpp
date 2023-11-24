#include<iostream>
using namespace std;

int power(int m, int n){
    
    if(n == 0)
        return 1;
    else
        return power(m,n-1) * m;
}

int main(){
    int M,N;
    cout<<"Enter M : ";
    cin>>M;
    cout<<"Enter N : ";
    cin>>N;

    cout<<power(M,N);

    return 0;
}
