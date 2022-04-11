#include<iostream>

using namespace std;

int digit[10] = {0};

void digitsPresent(int n){
	
	int lastDigit;
	
	while(n != 0){
		lastDigit = n%10;
		
		digit[lastDigit] = true;
		n /=10;
		
	}
}


int checkLastDigit(int num){
	int count = 0;
	
	int lastDigit = num % 10;
	
	if(digit[lastDigit] == true)
		count++;
		
	return count;
	
}


void findCount(int n, int k, int arr[]){
	int count = 0;
	
	for(int i=0; i<k; i++){
		count = checkLastDigit(arr[i]) == 1 ? count +1 : count;
	}
	
	cout<<count;
	
}


int main(){
	
	int N = 1731;
	
	// Preprocessing
	digitsPresent(N);
	
	int k;
	cin>>k;
	
	int arr[k];
	
	for(int i=0; i<k; i++) cin>>arr[i];
	
	findCount(N, k, arr);

    return 0;
}


