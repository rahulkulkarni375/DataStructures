#include<iostream>
using namespace std;
int MaxArr(int n,int* Arr){
    int max = 0;
    for(int i=0; i<n; i++){
        if(Arr[i] > max){
            max = Arr[i];
        }
    }
    return max;
}
int main(){
//Findig duplcate elements in sorted array using Method 1
cout<<"\nFindig duplcate elements in sorted array using Method 1\n";
    int Arr[] = {2,3,4,5,5,8,9,9,9,9,9,10};
    int lenA = sizeof(Arr)/sizeof(Arr[0]);
    int i,j,count;
    for(i=0; i<lenA-1; i++){
        if(Arr[i] == Arr[i+1]){
            j=i+1;
            while(Arr[i] == Arr[j])
                j++;

            count = j - i;
            cout<<Arr[i]<<" occurred "<<count<<" times "<<endl;
            i = j - 1;
        }
    }    

//Findig duplcate elements in sorted array using Method 2 : using hashing
cout<<"\nFindig duplcate elements in sorted array using Method 2 : using hashing \n";
    int MaxValue = MaxArr(lenA , Arr);
    int hashArr[MaxValue] = {0};
    for(i=0; i<lenA; i++)
        hashArr[Arr[i]]++;
    
    for(i=0; i<MaxValue; i++)
        if(hashArr[i] > 1)
            cout<<i<<" occurred "<<hashArr[i]<<" times \n";


//Findig duplcate elements in unsorted array Method 1 
cout<<"\nFindig duplcate elements in unsorted array \n";
    int Brr[] = {4,1,2,5,5,7,9,1,4,1,5};
    int lenB = sizeof(Brr)/sizeof(Brr[0]);
    count = 0;
    for(i=0; i<lenB-1; i++){
        count = 1;
        if(Brr[i] != -1){
            for(j=i+1; j<lenB; j++){
                if(Brr[i] == Brr[j]){
                    count++;
                    Brr[j] = -1;
                }
            }
        }
        if(count > 1)
            cout<<Brr[i]<<" occurred "<<count<<" times \n";
    }

//  NOT
//  WORKING
//  PROPERLY

//Findig duplcate elements in unsorted array Method 2 : using hashing 
cout<<"\nFindig duplcate elements in unsorted array Method 2 : using hashing \n";
   
    MaxValue = MaxArr(lenB , Brr);
    int hashBrr[MaxValue] = {0};
    for(i=0; i<lenB; i++)
        hashBrr[Brr[i]] = hashBrr[Brr[i]] + 1;
    
    for(i=0; i<MaxValue; i++)
        if(hashBrr[i] >= 1)
            cout<<i<<" occurred "<<hashBrr[i]<<" times \n";
   
    return 0;
}