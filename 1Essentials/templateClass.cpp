#include <iostream>
using namespace std;

template<class T>
class Operation{
    
private : 
    T a , b;
public :
    Operation(T a, T b){
        this->a = a; // this keyword is used to point the member of class
        this->b = b; 
    }

    T add(){
        return a + b;
    }
    T sub();
};

template <class T>
T Operation<T>:: sub(){
        return a - b;
}

int main(){

    Operation<int>  op(10,5);
    cout<<"Integer operation \n";
        cout<<op.add()<<endl;
        cout<<op.sub()<<endl;

    Operation<float>  op1(5.15,3.25);
    cout<<"Floating operation \n";
        cout<<op1.add()<<endl;
        cout<<op1.sub()<<endl;

    return 0;
}
