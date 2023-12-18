#include <iostream>
using namespace std;

int main(){

//It works for words which has occurred more than once
    char word1[] = "keen"; 
    char word2[] = "knee";
    int i,hashTable[25] = {};
    bool flag = true;

    for(i=0; word1[i]!='\0'; i++)
        hashTable[word1[i] - 97]++;    
    for(i=0; word2[i]!='\0'; i++){
        hashTable[word2[i] - 97]--;
        if(hashTable[word2[i] - 97] < 0){
            cout<<"Its not a anagram \n";
            break;
        }
    }
    if(word2[i] == '\0')
        cout<<"Its an anagram \n";
    
    return 0;
}