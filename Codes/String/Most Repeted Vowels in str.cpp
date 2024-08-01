#include<iostream>
#include<Vector>
using namespace std;

int isVowel(char c){
	
		if(c=='a' || c=='A'){
			return 1;
		}
		else if(c=='e' || c=='E'){
			return 2;
		}
		else if(c=='i' || c=='I'){
		return 3;
		}
		else if(c=='o' || c=='O'){
		return 4;
		}
		else if(c=='u' || c=='U'){
		return 5;
		}
		
		return 0;
}

char getRepetedVowel(string s){
	
	vector<int> count(5,0);
	char vowels[5]={'a','e','i','o','u'};
	int max=0,ans=0;
	for(int i=0;i<s.size();i++){
		
		int index=isVowel(s[i]);
		
		if(index){
			count[index-1]++;
			
			if(count[index-1]>max){
				max=count[index-1];
				ans=index-1;
			}
			
		}
	}
	
	return vowels[ans];
	
}


int main(){
	
	string str;
	
	cout<<"enter the string \n";
	
	cin>>str;
	
	cout<<"Common repeated vowel from string is "<<getRepetedVowel(str);
	
	return 0;
}
