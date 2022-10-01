#include<iostream>

using namespace std;

// O(1)
int digSum2(int n){
	if(n == 0)
		return 0;
	
	return (n%9 == 0) ? 9 : (n%9); 
}

// O(log(n))
int digSum(int n){
	int sum = 0;
	
	while(n>0 || sum>9){
		
		if(n == 0){
			n = sum;
			sum = 0;
		}
		
		sum += n%10;
		n/=10;
	}
	return sum;
}


int main(){
	
	
	int n;
	cin>>n;
	
	cout<<digSum(n)<<endl;
	cout<<digSum2(n);

	return 0;
}
