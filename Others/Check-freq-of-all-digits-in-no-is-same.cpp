#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


void isNumBalanced(int n){
	
	string st = to_string(n);
	int freq[10] = {0};
	
	for(int i=0; i<st.size(); i++)
		freq[st[i] - '0']++;
	
	bool isBalanced = true;
	int k=9;  // last index of array
	
	sort(freq,freq+10);

	while(freq[k-1] != 0){
		if(freq[k] != freq[k-1])
			isBalanced = false;
		k--;
	}
	
	if(isBalanced)
		cout<<"Yes";
	else
		cout<<"No";
	
}

int main(){
	
	int n;
	cin>>n;
	
	isNumBalanced(n);


    return 0;
}


