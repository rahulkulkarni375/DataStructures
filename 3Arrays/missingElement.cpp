#include <iostream>
using namespace std;

int main(){

//Finding missing single element in the first N natural numbers 
//     int Arr[] = {1,2,3,4,5,6,8,9,10};
//     int lenA = sizeof(Arr)/sizeof(Arr[0]);

//     int sum = 0, total = 0;
//     int highestA = 10; //Max value in Arr[]
//     for(int i=0; i<lenA; i++){
//         total = total + Arr[i];
//     }
//     sum =  (highestA * (highestA + 1)) / 2;
//     cout<<"Missing element in Arr : "<<sum - total<<endl;

// //Finding missing single element in the random N natural numbers (sorted array)
//     int Brr[] = {5,6,7,8,10,11,12,13};
//     int lenB = sizeof(Brr)/sizeof(Brr[0]);

//     int diff = Brr[0] - 0;
//     for(int i=0; i<lenB; i++){ 
//         if(Brr[i] - i != diff){
//             cout<<"Missing element in Brr : "<<(i+diff)<<endl;
//             break;
//         }
//     }

// //Finding multiple missing element in the random N natural numbers (sorted array)
//     int Crr[] = {4,5,6,8,9,15};    
//     int lenC = sizeof(Crr)/sizeof(Crr[0]);

//     diff = Crr[0] - 0;
//     cout<<"Missing elements in Crr : ";
//     for(int i=0; i<lenC; i++){
//         if(Crr[i] - i != diff)
//             while(diff < Crr[i] - i){
//                 cout<<(i+diff)<<" ";
//                 diff++;
//             }
//         }
//     cout<<endl;

//Finding multiple missing element in the random numbers (unsorted array)
    int Drr[] = {9,4,1,7,3,12};
    int lenD = sizeof(Drr)/sizeof(Drr[0]);    
    //Finding max and min element from Drr in single scan
    int maxD = Drr[0], minD = Drr[0];

    for(int i=0; i<lenD; i++){
        if(Drr[i] > maxD)
            maxD = Drr[i];
        if(Drr[i] < minD)
            minD = Drr[i];
    }
    cout<<"Max = "<<maxD<<endl;
    cout<<"Min = "<<minD<<endl;
    
    // cout<<"Missing elements in Drr : ";
    // int hashDrr[maxD];
    // for(int i=0; i<lenD; i++)
    //     hashDrr[Drr[i]] = 1;
    
    // for(int i=1; i<maxD; i++)   //From i=0 because we're not considering zero
    //     if(hashDrr[i] != 1)
    //         cout<<i<<" ";
    
    // cout<<endl;

    return 0;
}