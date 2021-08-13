#include<iostream>


using namespace std;


int main(){
	
	int n=4;
	int p=(1<<n);
	for(int i=1;i<p;i++){
		if((i&i>>1)==0) cout<<i<<" "; 			//if((i&i<<1)==0)
	}

	return 0;
}

