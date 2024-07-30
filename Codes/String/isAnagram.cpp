#include<map>
#include<iostream>
using namespace std;

bool isAnagrams(string s1,string s2){
	
	// Simply we can short the strings nd check if they are equal then they are anagrams else not
	
	//below code use extra space 

	
	if(s1.size()!=s2.size())
		return false;
	
	map<char,int> c1;
	map<char,int> c2;
	
	
	for(int i=0;i<s1.size();i++){
		
		c1[s1[i]]++;
		c2[s2[i]]++;
		
	}
	
	for(int i=0;i<s1.size();i++){
		
		if(c1[s1[i]]!=c2[s1[i]]){
			return false;
		}
		
	}
	
	return true;
}

int main(){
	
	string str1,str2;
	
	cout<<"Enter the strings\n";
	
	getline(cin,str1);
	getline(cin,str2);
	
	if(isAnagrams(str1,str2)){
		cout<<"Strings are anagrams \n";
	}
	else{
		cout<<" given strings are not anagrams ";
	}
	return 0;
}
