#include<iostream>


using namespace std;

int main(){
	
	int a[]={1, 3, 5, 7, 10, 11, 12, 13};
	int s=16;
	int n=sizeof(a)/sizeof(int);
	for(int i=0;i<n-1;i++){
		for(int j=i+1; j<n;j++){
			if(a[i]+a[j]==s){
				cout<<a[i]<<" and "<<a[j];
			}
		}
		cout<<endl;
	}

	return 0;
}

