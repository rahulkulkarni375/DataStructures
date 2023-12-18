#include <iostream>
using namespace std;

int main(){

    int i;
    char quote[]= "you can do anything";
// Finding length of a string 
    for(i=0; quote[i]!='\0';i++){}
    cout<<"Lenth of a string : "<<i<<endl;

// Converting uppercase to lowercase and vice-versa
// To use this method string does not any spaces
    char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for(i=0;letters[i]!='\0';i++){
        letters[i] = letters[i] + 32;
    }
    cout<<"Letters in lowercase : "<<letters<<endl;

    for(i=0;letters[i]!='\0';i++){
        letters[i] = letters[i] - 32;
    }
    cout<<"Letters in uppercase : "<<letters<<endl;

// In this method we can overcome the previous drawback like spl symbols now we can include spaces and all.
    char upLowcase[] = "ABCD wxyz";
    for(i=0;upLowcase[i]!='\0';i++){
        if(upLowcase[i] >= 65 && upLowcase[i] <=90)
            upLowcase[i] = upLowcase[i] + 32;
        else if(upLowcase[i] >= 97 && upLowcase[i] <=122){
            upLowcase[i] = upLowcase[i] - 32;
        }
    }
    cout<<"upLowcase : "<<upLowcase<<endl;


    return 0;
}