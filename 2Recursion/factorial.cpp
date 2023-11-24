#include<iostream>
using namespace std;

int Fact(int n){
    
    if(n <= 1)
        return 1;
    else
        return Fact(n-1) * n;
}

int main(){
    int N;
    cout<<"Enter N : ";
    cin>>N;

    cout<<Fact(N);

    return 0;
}
