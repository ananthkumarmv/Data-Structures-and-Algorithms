#include<iostream>
#include<algorithm>

using namespace std;

void addBinaryString(string A, string B){
	
	int i = A.size()-1, j = B.size()-1;
	
	string res = "";
	
	int sum, carry=0;
	while(i>=0 || j>=0){
		
		sum = carry;
		
		if(i>=0) sum += A[i] - '0';
		if(j>=0) sum += B[j] - '0';
		
		res += to_string(sum%2);
		
		carry = sum/2;
		i--;
		j--;	
		
	}
	
	if(carry != 0)
		res += '1';
		
	reverse(res.begin(), res.end());
	
	// to remove leading zeros
	int index = 0;
	
	while(index+1 < res.length() && res[index] == '0')
		index++;
		
	cout<<res.substr(index);
	
}

int main(){

	string A, B;
	cin>>A>>B;
	
	addBinaryString(A, B);

	return 0;
}
