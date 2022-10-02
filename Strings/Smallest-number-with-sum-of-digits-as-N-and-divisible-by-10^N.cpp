#include<iostream>

using namespace std;

void digitsNum(int n){
	
	if(n == 0){
		cout<<"0";
		return;
	}
	
	if(n % 9 != 0)
		cout<<(n%9);
		
	for(int i=1; i<=(n/9); i++)
	 	cout<<"9";
	
	for(int i=0; i<n; i++)
		cout<<"0";
	
}

int main(){
	
	int n;
	cin>>n;
	
	digitsNum(n);

	return 0;
}
