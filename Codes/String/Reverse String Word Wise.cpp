#include<iostream>
using namespace std;

string  reverseStr(string originalStr){
	
	int s=0,e=originalStr.size()-1;
	string str=originalStr;
	while(s<e){
		char temp=str[s];
		str[s]=str[e];
		str[e]=temp;
		
		s++;
		e--;
	}
	
	return str;
}

string reverseWordWise(string temp,char separator){
	
	string ans="";
	
	for(int i=temp.size();i>=0;i--){
	
		string word="";
	
		while(i>=0 && temp[i]!=separator ){
			
			word=word+temp[i];
			i--;
			
		}
		if(i>=0){
			
		}
		ans+=reverseStr(word);
		
		if(i>=0){
			ans+=temp[i];
		}
	}
	
	return ans;
	
}



int main(){
	
	string str1;
	
	cout<<"Enter the string \n";
	getline(cin,str1);
	cout<<"original string "<<str1<<endl;


	cout<<"after reversing string word wise "<<reverseWordWise(str1,' ');
	
	
	return 0;
}

