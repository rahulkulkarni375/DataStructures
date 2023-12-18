#include <iostream>
using namespace std;

int main(){

    int vowelCount = 0, consonantsCount = 0, i, wordCount = 0 ;

    char quote[] = "Never   give   up ";

    for(i=0;quote[i]!='\0';i++){
        if(quote[i]=='A'||quote[i]=='E'||quote[i]=='I'||quote[i]=='O'||quote[i]=='U'||quote[i]=='a'||quote[i]=='e'||quote[i]=='i'||quote[i]=='o'||quote[i]=='u')
            vowelCount++;
        else if((quote[i] >= 65 && quote[i] <= 90) || (quote[i] >= 97 && quote[i] <= 122))
            consonantsCount++;
    }

    for(i=0;quote[i]!='\0';i++){
        if(quote[i]==' ' & quote[i-1] != ' ')
            wordCount++;
    }

    cout<<"Total no.of.vowels : "<<vowelCount<<endl;
    cout<<"Total no.of.consonants : "<<consonantsCount<<endl;
    cout<<"Total no.of.words : "<<wordCount<<endl;

    return 0;
}