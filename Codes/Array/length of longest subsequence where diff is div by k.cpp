#include<iostream>
using namespace std;

int getLen(int arr[],int n,int k){
	
	
	//this function returns the len of longest sub seequence where diff between 
	//every consicutive elements is divided by k;
	
	int len=0;
	int flen=0;
	
	for(int i=1;i<n;i++){
		
		int diff=arr[i]-arr[i-1];
		
		if(diff%k==0){
			len++;
		}
		else{
			flen=max(flen,len);
			len=0;
		}
		
	}
	
	return flen+1;
}


int main(){
	
	int n=10;
	int k=3;
	
	int arr[]={1,5,6,9,27,33,45,69,12,10};
	
	

	int len=getLen(arr,n,k);
	cout<<len;
	return 0;
}
