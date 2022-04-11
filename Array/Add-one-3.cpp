#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


void addOne(vector<int>& a){
	
	reverse(a.begin(), a.end());
	
	int carry = 0;
	
	for(int i=0; i<a.size(); i++){
		if(i==0)
			a[i] += 1;
			
		else if(carry != 0)
			a[i] += carry;
			
		
		carry = a[i]/10;
		
		if(carry != 0)
			a[i] = a[i]%10;
		
	}
	
	if(carry != 0)
		a.push_back(carry);
			
	reverse(a.begin(), a.end());
	
}


int main(){
	
	vector<int> v{9, 8, 9, 9};
	
	addOne(v);
	
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}

    return 0;
}


