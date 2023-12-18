#include <iostream>
using namespace std;

int main(){

//Method 1 
    int Arr[] = {4,2,9,5,10};
    int lenA = sizeof(Arr)/sizeof(Arr[0]);
    int sum = 14;

    int i,j;
    for(i=0; i<lenA-1; i++){
        j=i+1;
        for(j=i; j<lenA; j++){
            if(Arr[i] + Arr[j] == sum)  
                cout<<"Pair of elements which gives you the sum as "<<sum<<" : "<<Arr[i]<<" and "<<Arr[j]<<endl;
        }
    }

//Method 2
    int Brr[] = {2,4,5,7,8,9,11,13,15,18};
    int lenB = sizeof(Brr)/sizeof(Brr[0]);
    //Find the max value in the Brr using any technique and that is maxvalue = 20
    int maxValue = 18,rem = 0;
    int hashBrr[maxValue] = {0};
    sum = 17;
    
    for(i=0; i<=lenB; i++)
        hashBrr[Brr[i]] = 1;

    for(i=0; i<=maxValue; i++){
        rem = sum - Brr[i];
        if(hashBrr[Brr[i]] == 1 && hashBrr[rem] == 1){   
            cout<<Brr[i]<<" + "<<rem<<" = "<<sum<<endl;
            hashBrr[Brr[i]] = -1;
        }
    }
    return 0;
}