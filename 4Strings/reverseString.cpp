#include <iostream>
using namespace std;

int main(){

    char word[] = "anything";   
    int i,j;
    char reversedWord[8];
//Method 1 
    cout<<"Before : "<<word<<endl;
    for(i=0;word[i]!='\0';i++){}
    i = i - 1;
    
    for(j=0; i>=0; i--,j++){
        reversedWord[j] = word[i];
    }
    reversedWord[j] = '\0';
    cout<<"After : "<<reversedWord<<endl;

//Method 2
    char word2[] = "something";
    for(i=0; word2[i]!='\0';i++){}
    
    int temp;
    i=i-1;
    for(j=0; j<i; i--,j++){
        temp = word2[j];
        word2[j] = word2[i];
        word2[i] = temp;
    }
    cout<<"\nLater : "<<word2<<endl;


    return 0;
}