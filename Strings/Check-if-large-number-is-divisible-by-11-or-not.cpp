#include<iostream>

using namespace std;

int main(){
	
	string str = "76945";
	
	int n = str.length();
	
	int oddDigSum = 0, evenDigSum = 0;
	
	for(int i=0; i<n; i++){
		if(i%2 == 0)
			oddDigSum += (str[i] - '0');
			
		else
			evenDigSum += (str[i] - '0');
	}
	
	if((oddDigSum - evenDigSum) % 11 == 0 )
		cout<<"Yes!";
	
	else
		cout<<"No";

	return 0;
}
