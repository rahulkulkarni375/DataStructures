#include<iostream>
using namespace std;

int Fib(int n){
    
    if(n == 1)
        return 1;
    if(n == 0)
        return 0;
    
    return Fib(n-2) + Fib(n-1) ;
}

int main(){
    int N;
    cout<<"Enter N : ";
    cin>>N;

    cout<<Fib(N);

    return 0;
}
