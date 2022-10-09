#include<iostream>

using namespace std;

// O(row x col)
void identity(int num){
	
	for(int row=0; row<num; row++){
		for(int col=0; col<num; col++){
			if(row == col)
				cout<<"1"<<" ";
			else
				cout<<"0"<<" ";
		}
		cout<<endl;
	}
}

int main(){
	
	int num;
	cin>>num;
	
	identity(num);

	return 0;
}
