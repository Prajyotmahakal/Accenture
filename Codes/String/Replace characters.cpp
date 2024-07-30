
#include<iostream>
using namespace std;

string replaceChar(string originalStr,char c1,char c2){
	
	// when we have to return a new string 
	
	string str=originalStr;
	
	for(int i=0;i<str.size();i++){
		
		if(str[i]==c1){
			str[i]=c2;
		}
		else if(str[i]==c2){
			str[i]=c1;
		}
	}
	return str;
}

void replace_Char(string &str,char c1,char c2){
	
	// when we want to modify the given string  
	

	
	for(int i=0;i<str.size();i++){
		
		if(str[i]==c1){
			str[i]=c2;
		}
		else if(str[i]==c2){
			str[i]=c1;
		}
	}
	
}

int main(){
	
	string str;
	char c1,c2 ;
	
	cout<<" enter the string \n";
	getline(cin,str);
	
	cout<<" Enter the character which should be replaced by each others \n";
	cin>>c1>>c2;
	
	replace_Char(str,c1,c2);
	cout<<" The result after replacement is "<<str;
	return 0;
}
