/*
*character arrays need to know size before
*larger size required for ops
*no terminating extra char


*string no need to know size
*performing ops easy
*terminated with \0
*/

#include<iostream>
#include<string>
 using namespace std;

int main(){

	//ways to read string
	string s1;
	string s2(4,'a'); //stores a 4 times
	string s3;
	int n1=25; string n2="67";

	cout<<"enter s3 using getline"<<endl; getline(cin,s3); //Reads whole line 
	cout<<"entet s1\n";	cin>>s1;  	

	cout<<"s1 : "<<s1<<endl;
	cout<<"s2 : "<<s2<<endl;
	cout<<"s3 : "<<s3<<endl;

	cout<<"appendig s1 and s2 :"<<s1.append(s2)<<endl;
	cout<<"concatenation s1 & s3: "<<s1+s3<<endl; 

	cout<<"Before clearing the string : gives 0 ---> "<<s3.empty()<<endl;
	s3.clear();
	cout<<"After clearing the string : gives 1 ---> "<<s3.empty()<<endl;
	

	if(s1.compare(s3))
		cout<<"s1 and s3 are same \n";
	else
		cout<<"s1 and s3 are not same \n";
	
	if(!s1.empty())
		cout<<"s1 is not empty\n";
	s1.clear();
	if(s1.empty())
		cout<<"s1 is empty\n";
		
	cout<<"finding 'a' in s1 : "<<s1.find("a")<<endl;
	
	cout<<"coverting str to num  & str + 10 : (67+10=77) : "<<stoi(n2)+10<<endl;
	cout<<"coverting num to str  & str + 09 : (25+9=259) : "<<to_string(n1)+"9"<<endl;

	cout<<"s2 after inserting  'ttt' from 2nd index : "<<s2.insert(2,"ttt")<<endl;
	cout<<"s3 length : "<<s3.length()<<endl;
	//Executed till here
	
	string alpha = "qwertyuiasdfghj";
//	cout<<"sorted alpha using sort() : "<<sort(alpha.begin(), alpha.end())<<endl;  
//	cout<<"s1 after erasing 2nd index  to count 3 : "<<s1.erase(2,2)<<endl;
//cout<<"substring from s3 2nd index to 4th index : "<<s3.substr(2,4)<<endl;	

	return 0;
}