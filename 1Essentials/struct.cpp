// #include<iostream>
// using namespace std;

// struct Rectangle {
    
//     int length;
//     int breadth;

// };

// void Increase(struct Rectangle rect){
//     cout<<"This is a call by value function by struct type\n";
//     cout<<"Length : "<<++rect.length<<endl;
//     cout<<"Breadth : "<<++rect.breadth<<endl;
// }

// void Decrease(struct Rectangle *rect){
//     cout<<"This is a call by address function by struct type\n";
//     cout<<"Length : "<<--rect->length<<endl;        //Better to use arrow if its a pointer 
//     cout<<"Breadth : "<<--(*rect).breadth<<endl;    //other way if its a pointer      
// }

// struct Rectangle *swap(){
     
//     struct Rectangle *p = new struct Rectangle;
//     p->length = 18;
//     p->breadth = 45;

//     return p;
// }

// int main()
// {  
//     struct Rectangle r;
//     r.length=5;    r.breadth=8;
//     cout<<"Area of Rectangle : "<<r.length*r.breadth<<endl;
//     cout<<"Size of Struct rectangle : "<<sizeof(r)<<endl;


//     struct Rectangle *ptr = &r; //Pointer to struct
//     cout<<"Area of Rectangle using pointer : "<<(ptr->length) * (ptr->breadth)<<endl;

//     //Struct with pointer
//     struct Rectangle *q = new struct Rectangle; //Dynamic memo allocation in heap memo
//     q->length = 10; q->breadth = 20;
//     cout<<"Area of Rectangle using pointer in heap memo : "<<(q->length) * (q->breadth)<<endl;
     
//     //Struct as parameters (call by value)  
//     //Here it doesnt affect the actual values of valriable which is passed to the function
//     Increase(r);
//     cout<<"After calling call by value\n";
//     cout<<"Length : "<<r.length<<endl;
//     cout<<"Breadth : "<<r.breadth<<endl;


//     //Struct as parameters (call by address)  
//     //Here it  affect the actual values of valriable which is passed to the function
//     Decrease(&r);
//     cout<<"After calling call by address\n";
//     cout<<"Length : "<<r.length<<endl;
//     cout<<"Breadth : "<<r.breadth<<endl;

//     //Struct returning a pointer struct
    
//     struct Rectangle *qtr = swap();
//     cout<<"Initializing using a pointer struct \n";
//     cout<<"Length : "<<qtr->length<<endl;
//     cout<<"Breadth : "<<qtr->breadth<<endl;


//     return 0;
// }



#include <iostream>
using namespace std;

class Rectangle{

private : 
    int length, breadth;

public:
    Rectangle(int,int);
    int Area();
    int Perimeter();
    void setValue(int,int);
    ~Rectangle();
};

Rectangle::Rectangle(int a, int b){
    length = a;
    breadth = b;
}

int Rectangle::Area(){
    return length * breadth;
}

int Rectangle::Perimeter(){
    return 2 * (length + breadth);
}

void Rectangle::setValue(int x, int y){
    length = x;
    breadth = y;
}
Rectangle::~Rectangle(){};

int main(){

    Rectangle rrr(2,4);
    cout<<"Before setting \n";
    cout<<rrr.Area()<<endl;
    cout<<rrr.Perimeter()<<endl;
    rrr.setValue(6,8);
    cout<<"After setting \n";
    cout<<rrr.Area()<<endl;
    cout<<rrr.Perimeter()<<endl;    
    return 0;
}
