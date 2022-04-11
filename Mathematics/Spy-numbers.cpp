#include<iostream>

using namespace std;

void checkSpy(int num){
	int digit, sum=0, product = 1;
	
	while(num > 0){
		digit = num %10;
		
		sum += digit;
		product *= digit;
		
		num /= 10;
		
	}
	
	if(sum == product)
		cout<<"Yes";
	else cout<<"No";
	
}

int main(){
	
	int n;
	cin>>n;
	
	checkSpy(n);

    return 0;
}


