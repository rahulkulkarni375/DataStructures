#include <iostream>
using namespace std;

int main(){

    char word[] = "abcdeeeabb";
    int i,j,charCount = 0;
    int hashTable[26]= {0};
//Finding duplicate characters using hast table
// A = 65 ... Z = 90
// a = 97 ... z = 122
    for(i=0;word[i]!='\0';i++){
        hashTable[word[i] - 97]++;
    }
    for(i=0; i<26; i++){    
        if(hashTable[i] > 0){
            int j = i + 97;
            cout<<(char)j<<" : "<<hashTable[i]<<endl;
        }
    }

    return 0;
}