/*
//**********LINEAR SEARCH USING ITERATION**********
#include<iostream>
#define max 20
using namespace std;

int i,n,key;   			//Global vars
int A[max],flag;

int Linear_Search(int A[],int key,int n){
	for(i=0;i<n;i++)
		if(key == A[i])
			return i;
	return -1;
}

int main(){
	
	cout<<"**********LINEAR SEARCH USING ITERATION**********\n";
	cout<<"Enter the size of an array\n";
	cin>>n;
	
	cout<<"Enter the array elements \n";
	for(i=0;i<n;i++)
		cin>>A[i];
	
	cout<<"Enter the key to be searched \n";
	cin>>key;


	flag = Linear_Search(A,key,n);
	if(flag != -1)
		cout<<"The key is found at the index : "<<flag<<endl;
	else
		cout<<"The key is not found "<<endl;
	return 0;
}

*/

//***********BINARY SEARCH USING RECURSION***********
#include<iostream>
#define max 20
using namespace std;

int i,n,key;   			//Global vars
int A[max],flag;
int mid;

int Binary_Search(int A[],int key,int low,int high){
	
	mid = (low + high)/2;
	
	if(A[mid] == key)
		return mid;
	
	if(key > A[mid])
		Binary_Search(A,key,mid+1,high);
	else
		Binary_Search(A,key,low,mid-1);
}
	 
int main(){

	cout<<"***********BINARY SEARCH USING RECURSION***********\n";
	
	cout<<"Enter the size of an array\nIt should be in sorted order";
	cin>>n;
	
	cout<<"Enter the array elements \n";
	for(i=0;i<n;i++)
		cin>>A[i];
	
	cout<<"Enter the key to be searched \n";
	cin>>key;

	flag = Binary_Search(A,key,0,n);
	if(flag != -1)
		cout<<"The key is found at the index : "<<flag<<endl;
	else
		cout<<"The key is not found "<<endl;
	return 0;
}