#include <iostream>
using namespace std;

int main(){

    int a[] = {11,22,33,44,55,66};
    int *p = new int[5];

    cout<<"a[0] : "<<a[0]<<"\n";
    cout<<"1[a] : "<<1[a]<<"\n";
    cout<<"*(a+2) : "<<*(a+2)<<"\n";

    p[0]=99;    p[1]=88;
    cout<<"p[0] : "<<p[0]<<"\n";
    cout<<"p[1] : "<<*(p+1)<<"\n";

    delete []p;
    return 0;
}