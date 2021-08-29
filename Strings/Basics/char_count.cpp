#include<iostream>


using namespace std;

int main(){
	
	int digit=0, alpha=0, space=0, others=0;
	char ch;
	cin>>ch;
	
	while(ch!='$'){
		if(ch>='0' and ch<='9'){
			digit++;
		}
		else if(ch>='A' and ch<='Z' or ch>='a' and ch<='z'){
			alpha++;
		}
		
		else if(ch==' ' or ch=='\n' or ch=='\t'){
			space++;
		}
		else{
			others++;
		}
	}
	
	cout<<"Digits"<<digit<<endl;
	cout<<"Alphas"<<alpha<<endl;
	cout<<"Spaces"<<space<<endl;
	cout<<"Others"<<others<<endl;
	
	return 0;
}

