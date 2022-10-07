#include<iostream>

using namespace std;

int main(){
	
	string str = "ABcED";
	int result = 0;
	for(int i=0; i<str.size(); i++){
		
		if(i == (str[i] - 'a') || i == (str[i] - 'A'))
			result++;
	}
	
	cout<<result;

	return 0;
}
