#include<iostream>


using namespace std;

int main(){
	
	int a[]{1,1,2,2,3};
	
	int c=0;
	for(int i=0; i<5; i++){
		int c=0;
		for(int j=0; j<5; j++)
			if(a[j]==a[i])
				c++;
		if(c%2!=0)
			cout<<a[i];
	}

	return 0;
}

