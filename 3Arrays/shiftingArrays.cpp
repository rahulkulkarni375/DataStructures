#include<iostream>
using namespace std;

int main(){
    
    int Arr[10] = {1,2,3,4,5,6,7,8};
    int i,j,temp,length;

    length = sizeof(Arr)/sizeof(Arr[0]);
    int Brr[length];

    //Method 1 : Reversing an array
    j=length-1;
    for(i=0; i<length; i++){
        Brr[j] = Arr[i];  
        j--;
    }


    for(i=0; i<length; i++)
        cout<<Arr[i]; 
    cout<<endl;

    for(i=0; i<length; i++)
        Arr[i] = Brr[i];   

    for(i=0; i<length; i++)
        cout<<Arr[i];     
    cout<<endl;

    //Method 2 : Reversing an array
    j = length - 1;
    for(i=0; i<length; i++){
        if(i < j){
            temp = Arr[i];
            Arr[i] = Arr[j];
            Arr[j] = temp;
            j--;
        }
    }

    for(i=0; i<length; i++)
        cout<<Arr[i];     
    cout<<endl;


    //Left shifting an array 
    for(i=0; i<length; i++)
        if(i==length-1)
            Arr[i] = 0;
        else
            Arr[i] = Arr[i+1];    
    
    for(i=0; i<length; i++)
        cout<<Arr[i];     
    cout<<endl;

    //Right shifting an array 
    for(i=length; i>=0; i--)
        if(i==0)
            Arr[i] = 0;
        else
            Arr[i] = Arr[i-1];   

    for(i=0; i<length; i++)
        cout<<Arr[i];     
    cout<<endl;

    return 0;

}