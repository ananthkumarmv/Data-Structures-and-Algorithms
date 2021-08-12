#include<iostream>


using namespace std;

int main(){
	int res=0;
	int n=15;
	while(n>0){
		if(n%2!=0) 		//if((n&1)==1) or res+=(n&1)
		res++;	
		n/=2;			//n>>=1;
	}
	cout<<res;

	return 0;
}

