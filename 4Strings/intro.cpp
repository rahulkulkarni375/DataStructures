#include <iostream>
using namespace std;

int main(){
//   https://www.ascii-code.com/ 

    char temp = 'T'; //It holds one char 
    char alpha[] = {'a','b','c','d','e','\0'}; // \0 is string delimiter or denotes end of string or null character
    char name[] = "programming"; //Here null char will be added automatically
    char name2[] = {65,66,67,68,69,70,97,98,99,100,101,102,'\0'}; //you can also use this type of declaration

//NOTE : For only char array or strings it is possible to print array without any loops
    cout<<"Temp : "<<temp<<endl;
    cout<<"Alpha : "<<alpha<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Name 2: "<<name2<<endl;

    return 0;
}