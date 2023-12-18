//Set Operations : Union, Intersection, Difference, Membership
#include <iostream>
using namespace std;

int main(){

    int Arr[] = {2,4,8,5,10,6},   Brr[] = {1,2,5,3,9,6};
    int aLen = sizeof(Arr)/sizeof(Arr[0]),  bLen = sizeof(Brr)/sizeof(Brr[0]);
    int i, j, k;
    int cLen = aLen + bLen;
    int Crr[cLen];

//Set Union on array
    
    k = 0; //For Crr[]
    for(i=0,j=0; i<aLen,j<bLen; i++,j++){
            if(Arr[i] > Brr[j]) 
                Crr[k++] = Arr[i];
            else {
                if(Arr[i] < Brr[j])
                    Crr[k++] = Brr[j];
                else    
                    Crr[k++] = Brr[j];
            }
    }

    for(k=0; k<cLen; k++)
        cout<<Crr[k]<<" ";
    cout<<endl;
    return 0;
}