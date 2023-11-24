// Pointers and Reference

#include<iostream>
using namespace std;

struct pointers
{
    int a;  
    int b;
}point;


int main(){

    int a = 25;
    int *p = &a;
    int **pp = &p;

    int arr[] = {2,4,6,8,10};
    int *p_arr = arr;

    cout<<"Printing array using pointer \n";
    for(int i=0; i<5; i++)
        cout<<p_arr[i]<<" ";
    cout<<endl;

    //Creating array in heap memory using dynamic memo allocation
    int *q = new int[5];

    q[0]=1; q[1]=3; q[2]=5; q[3]=7; q[4]=9;
    cout<<"Printing heap array using pointer \n";
    for(int i=0; i<5; i++)
        cout<<q[i]<<" ";

    if(&a == p)
        cout<<"\nIts TRUE that (&a == p) \nAddress of a (&a , p and *pp are holds same address) : "<<&a<<endl;
    
    cout<<"Address of p : "<<&p<<"\n";
    
    if(a == *p)
        cout<<"Its TRUE that (a == *p) \nValue of variable a (a , *p  holds value) : "<<*p<<"\n\n";

    if(**pp == a)
        cout<<"Its TRUE that (**pp == a == *p) \nDouble pointer  (**pp == a == *p) : "<<**pp<<endl;

    cout<<"Address of pp  (&pp): "<<&pp<<"\n";


    int *p1;
    float *p2;
    double *p3;
    char *p4;
    struct point *p5;

        cout<<"Size of p1 "<<sizeof(p1)<<endl;  
        cout<<"Size of p2 "<<sizeof(p2)<<endl;
        cout<<"Size of p3 "<<sizeof(p3)<<endl;
        cout<<"Size of p4 "<<sizeof(p4)<<endl;
        cout<<"Size of p5 "<<sizeof(p5)<<endl;
    
        //Here all the pointers have same size that is 4Bytes     

        int roll_number = 25;
        int &rno = roll_number; //rno is a reference to roll_number or another name given to variable

    
        cout<<"rno : " <<rno<<endl;
        cout<<"roll_number : "<<roll_number<<endl;
        cout<<"Address of rno : "<<&rno<<endl;
        cout<<"Address of roll_number: "<<&roll_number<<endl;


    return 0;
}