
#include<iostream>
using namespace std;

//Method 1 : 3 column representation or coordinate list
int SparseMat[10][10];
struct Element {
    int i,j,x;
};

struct Sparse{
    int m,n,num;
    struct Element *e;
};

void create(struct Sparse *s){
    cout<<"Enter no.of.rows,columns and non-zero elements\n";
    cin>>s->m;
    cin>>s->n;
    cin>>s->num;
    s->e = new Element[s->num]; //Creating dynamic memory
    cout<<"Enter all the non zero elements\n";
    for(int i=1;i<=s->num;i++){
        cout<<"Enter row,cloumn and element respectively\n";
        cin>>s->e[i].i;
        cin>>s->e[i].j;
        cin>>s->e[i].x;
    }
    cout<<endl;
}

void display(struct Sparse *s){
    cout<<"3 column representation \n";
    cout<<"Rows\tColumns\tElements\n";
    for(int i=1;i<=s->num;i++){
        
        cout<<s->e[i].i<<"\t";
        cout<<s->e[i].j<<"\t";
        cout<<s->e[i].x<<"\t";
        cout<<endl;

        //Coping sparse matrix's 3 column representation to a global matrix called "SparseMat"
        SparseMat[s->e[i].i][s->e[i].j] = s->e[i].x;

    }
    cout<<endl;
}


void addSparseMat(struct Sparse *s1,struct Sparse *s2, struct Sparse *sum){
    if(s1->m == s2->m && s1->n == s1->n){
        int maxSize = s1->num + s1-> num ;
        sum->e = new Element[maxSize];
        for(int i=1;i<=maxSize;i++){
            if(s1->e[i].i < s2->e[i].i){
                if(s1->e[i].j < s2->e[i].j){
                    sum->e[i].i = s1->e[i].i;
                    sum->e[i].j = s1->e[i].j;
                    sum->e[i].x = s1->e[i].x;
                }
                else{
                    sum->e[i].i = s2->e[i].i;
                    sum->e[i].j = s2->e[i].j;
                    sum->e[i].x = s2->e[i].x;
                }
            }
            else{
                 if(s1->e[i].j < s2->e[i].j){
                    sum->e[i].i = s1->e[i].i;
                    sum->e[i].j = s1->e[i].j;
                    sum->e[i].x = s1->e[i].x;
                }
                else{
                    sum->e[i].i = s2->e[i].i;
                    sum->e[i].j = s2->e[i].j;
                    sum->e[i].x = s2->e[i].x;
                }     
            } 
             if(s1->e[i].i == s2->e[i].i){
                if(s1->e[i].j == s2->e[i].j){
                    sum->e[i].i = s1->e[i].i; 
                    sum->e[i].j = s1->e[i].j; 
                    sum->e[i].x = s1->e[i].x + s2->e[i].x;
                }
            }     
        }    
    } 
}

void displaySparseMat(struct Sparse *s){
    cout<<"Sparse Matrix\n";
    for(int i=1;i<=s->m;i++){
        for(int j=1;j<=s->n;j++){
            cout<<SparseMat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    struct Sparse s1,s2;
    struct Sparse sum;
    create(&s1);             create(&s2);               //addSparseMat(&s1,&s2,&sum);
    display(&s1);            display(&s2);              //display(&sum);
    displaySparseMat(&s1);   displaySparseMat(&s2);     //displaySparseMat(&sum);

    return 0;
}