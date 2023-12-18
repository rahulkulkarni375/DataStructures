#include<iostream>
using namespace std;

int main(){

    // char name[] = "this is not a valid string";
    char name[] = "string123";
    int flag = true;
    for(int i=0;name[i]!='\0';i++){
        if( !(name[i]>=65 && name[i]<=90) && !(name[i]>=97 && name[i]<=122) && !(name[i]>=48 && name[i]<=57))
            flag = false;
    }

    if(flag)
        cout<<"It is a valid string\n";
    else    
        cout<<"It is not a valid string\n";

    return 0;
}