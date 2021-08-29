#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	
	char a[1000];
	char largest[1000];
	
	int len=0;
	int largest_len=0;
	
	cin.get();   //If we don't include then the first input it reads will be "\n"
	
	for(int i=0;i<n;i++){
		cin.getline(a, 1000);
		//cout<<a<<endl;
		len = strlen(a);
		if(len>largest_len){
			largest_len=len;
			largest_len = len;
			strcpy(largest, a);
		}
	}
	
	cout<<largest<<" and "<<largest_len<<endl;

	return 0;
}

