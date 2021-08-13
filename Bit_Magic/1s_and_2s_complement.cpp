#include<iostream>


using namespace std;

char flip(char c){
	return (c=='0')? '1':'0';
}


void print1and2scomp(string bin){
	string ones, twos;
	ones=twos="";
	
	int n=bin.length();
	for(int i=0;i<n;i++){
		ones+=flip(bin[i]);
	}
	cout<<ones<<endl;
	
	twos=ones;
	int i;
	for(i=n-1;i>=0;i--){
		if(ones[i]=='1') twos[i]='0';
		else{
			twos[i]='1';
			break;
		} 
	}
	
	if(i==-1) twos = '1' + twos;
	cout<<twos;
}



int main(){
	string bin="111";
	print1and2scomp(bin);

	return 0;
}

