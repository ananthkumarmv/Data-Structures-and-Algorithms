#include<iostream>


// Given a sorted array, find pair of elements that sum to k (given)

using namespace std;

int main(){
	
	int a[]={1, 3, 5, 7, 10, 11, 12, 13};
	int s=16;
	
	int i=0;
	int j=sizeof(a)/sizeof(int)-1;
	
	while(i<j){
		int csum = a[i]+a[j];
		if(csum>s){
			j--;
		}
		else if(csum<s){
			i++;
		}
		else if(csum==s){
			cout<<a[i]<<" and "<<a[j]<<endl;
			i++;
			j--;
		}
	}
	return 0;
}

