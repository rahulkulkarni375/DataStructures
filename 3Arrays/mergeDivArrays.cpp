#include <iostream>
using namespace std;

int main(){
    int Arr[] = {-9,4,-6,-1,7,-8,2,-5,3};

    int Brr[] = {11,44,33,66};
    int m = sizeof(Brr)/sizeof(Brr[0]);
    
    int Crr[] = {22,88,77,55};
    int n = sizeof(Crr)/sizeof(Crr[0]);
    
    int Drr[m+n];
    int i,j,k,length,temp;
    
    length = sizeof(Arr)/sizeof(Arr[0]);
    i=0;
    j=length-1;
//Separating -ve and +ve values
    while(i < j){
        while(Arr[i] < 0)
            i++;
        while(Arr[j] >= 0)
            j--;
        if(i < j){
            temp = Arr[i];
            Arr[i] = Arr[j];
            Arr[j] = temp;
        }
    }
    for(i=0; i<length; i++) 
        cout<<Arr[i]<<" ";
    cout<<endl;

//Merge two arrays
    i = 0;
    j = 0;
    k = 0;
    // //Method 1
    // while(i<m && j<n){
    //     if(Brr[i] > Crr[j])
    //         Drr[k++] = Crr[j++];
    //     else    
    //         Drr[k++] = Brr[i++];
    // }

    // for(;i<m;i++)
    //     Drr[k++] = Brr[i];

    // for(;j<n;j++)
    //     Drr[k++] = Crr[j];

    //Method 2
    while(i < m)
        Drr[k++] = Brr[i++];

    while(j < n)
        Drr[k++] = Crr[j++];

    for(i=0; i<(m+n); i++) 
        cout<<Drr[i]<<" ";
    cout<<endl;

    return 0;
}
