#include<iostream>
using namespace std;

int sumofN(int n){
    
    if(n == 1)
        return 1;
    else
        return sumofN(n-1) + n;
}

int main(){
    int N;
    cout<<"Enter N : "<<endl;
    cin>>N;

    cout<<sumofN(N);

    return 0;
}
