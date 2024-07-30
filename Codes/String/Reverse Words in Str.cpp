
#include<iostream>
using namespace std;

void reverseStr(string &str,int s,int e){
	
	while(s<e){
		char temp=str[s];
		str[s]=str[e];
		str[e]=temp;
		
		s++;
		e--;
	}
}

void reverseWords(string &temp,char separator){
	
	
	
	for(int i=0;i<temp.size();i++){
	
		int s=i;
		while(i<temp.size() && temp[i]!=separator ){
			
		
			i++;
			
		}
		reverseStr(temp,s,i-1);
	}
	
	
}



int main(){
	
	string str1;
	
	cout<<"Enter the string \n";
	getline(cin,str1);
	cout<<"original string "<<str1<<endl;
	reverseWords(str1,'-');

	cout<<"after reversing words in string  "<<str1;
	
	
	return 0;
}

