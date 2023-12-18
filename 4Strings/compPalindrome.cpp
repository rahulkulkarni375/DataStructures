#include <iostream>
using namespace std;

int main(){

    char word1[] = "anything";
    char word2[] = "anything";
    int i,flag = true;
//Comparision
    for(i=0; word1[i]!='\0',word2[i]!='\0';i++){
        if(word1[i] != word2[i]){
            flag = false;
            break;
        }
    }
    if(flag)
        cout<<"Both strings are same\n";
    else    
        cout<<"Both strings not are same\n";

//Palindrome
    char word3[] = "iaai";
    int j;
    flag = true;
    for(i=0;word3[i]!='\0';i++){}
    i = i - 1; //Because i is pointing at null so to point last char we assigned i = i - 1; 
    for(j=0; j<i; i--,j++){
        if(word3[i] != word3[j]){
            flag = false;
            break;
        }
    }
     if(flag)
        cout<<"It is palindrome\n";
    else    
        cout<<"It is not a palindrome\n";
    
    return 0;
}