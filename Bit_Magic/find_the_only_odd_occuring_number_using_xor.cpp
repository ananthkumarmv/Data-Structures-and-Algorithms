#include<iostream>


using namespace std;

int main(){
	
	int a[]{1,1,2,2,3};
	
	int c=a[0];
	for(int i=1; i<5; i++){
		c^=a[i];
	}
	cout<<c;
	
	return 0;
}

