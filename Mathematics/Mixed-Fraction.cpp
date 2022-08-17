#include<iostream>

using namespace std;

int main(){
	
	int n, d;
	cin>>n>>d;
	
	int a = n/d;
	
	int b = n%d;
	
	if(b>0){
		cout<<a<<" "<<b<<"/"<<d;
	}
	else{
		cout<<a;
	}

    return 0;
}


