 #include<iostream>
using namespace std;

int Get(int index,int* numbers,int lenght){

    if(index>=0 && index<lenght)
        cout<<"element at "<<index<<" : "<<numbers[index]<<endl;
    else
        cout<<"Invalid index \n";
}

int Set(int index,int value,int* Arr,int lenght){

    if(index>=0 && index<lenght)
        Arr[index] = value;
    else
        cout<<"Invalid index \n";
   
}

int Max(int* Arr,int N){
    
    int max=0;
    for(int i=0;i<N;i++){
        if(Arr[i] > max)
            max = Arr[i];
    }
    cout<<"Max element in the array : "<<max<<endl;
}

int Min(int* Arr,int N){

    int min=0;
    for(int i=0;i<N;i++){
        if(Arr[i] < min)
            min = Arr[i];
    }
    cout<<"Min element in the array : "<<min<<endl;   
}

int Sum(int Arr[],int N){
    
    int sum=0;
    for(int i=0;i<N;i++){
        sum = sum + Arr[i];
    }
    cout<<"Sum of array : "<<sum<<endl;
    cout<<"Avg of array : "<<(sum/N)<<endl;
}


int main(){

    int numbers[] = {2,1,4,5,7,3,9,8,0,11,22,64,26,87,52,26};
    int lenght = sizeof(numbers) / sizeof(numbers[0]);
    int getIndex,setIndex,element;

    cout<<"Enter the index to fetch element \n";
    cin>>getIndex;

    cout<<"Enter the element and index to set \n";
    cin>>element>>setIndex;

    Get(getIndex,numbers,lenght);
    Set(setIndex,element,numbers,lenght);
    Max(numbers,lenght);
    Min(numbers,lenght);
    Sum(numbers,lenght);

    return 0;    
}